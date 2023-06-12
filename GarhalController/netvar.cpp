//
// Created by WolverinDEV on 08/06/2023.
//

#include "./netvar.h"
#include "./data.hpp"
#include "./offsets.hpp"
#include <fstream>
#include <unordered_map>

using namespace netvar;

static std::unordered_map<std::string, std::string> kClassInheritance{
        { "CBaseAnimating", "CBaseEntity" },
        { "CBaseAnimatingOverlay", "CBaseAnimating" },
        { "CBaseFlex", "CBaseAnimatingOverlay" },
        { "CBaseCombatCharacter", "CBaseFlex" },
        { "CBasePlayer", "CBaseCombatCharacter" },
        { "CCSPlayer", "CBasePlayer" },
        { "CPlantedC4", "CBaseEntity" },
};
static std::unordered_map<std::string, std::string> kVarTypeOverrides {
        { "m_ArmorValue", "int" },
//        NET_CLASS_VAR_S(get_ang_rotation[0], float, 0x12c);
//        NET_CLASS_VAR_S(get_ang_rotation[1], float, 0x130);
//        NET_CLASS_VAR_S(get_ang_rotation[2], float, 0x134);
};
static std::unordered_map<std::string, std::string> kVarNameOverrides {
        { "m_ArmorValue", "int" },
//        NET_CLASS_VAR_S(get_ang_rotation[0], float, 0x12c);
//        NET_CLASS_VAR_S(get_ang_rotation[1], float, 0x130);
//        NET_CLASS_VAR_S(get_ang_rotation[2], float, 0x134);
};

inline std::string make_snake_case(const std::string_view& name) {
    std::string result{};
    result.reserve((size_t) ((float) name.length() * 1.5f));

    for(size_t index{0}; index < name.length(); index++) {
        if(!isupper(name[index])) {
            result.push_back(name[index]);
            continue;
        }

        auto last_upper = index > 0 && isupper(name[index - 1]);
        auto next_upper = index + 1 < name.length() && isupper(name[index + 1]);
        bool emit_underscore{false};
        if(last_upper && !next_upper) {
            emit_underscore = true;
        } else if(!last_upper) {
            emit_underscore = true;
        }

        if(emit_underscore && !result.empty() && result.back() != '_') {
            result.push_back('_');
        }

        result.push_back((char) tolower(name[index]));
    }

    return result;
}

struct class_definition {
    class property {
    public:
        std::string name{};
        uint32_t type{PROP_TYPE_INT};
        uint32_t offset{0};

        size_t str_buffer_size{};

        void generate(std::ostream& sout) const {
            if(this->name.find_first_of('[') != std::string::npos || this->name.find_first_of('.') != std::string::npos) {
                sout << "  /* TODO: fix name for " << this->name << " of type " << this->type << "*/\n";
                return;
            }

            size_t prefix_length{this->name.starts_with("m_") ? (size_t) 2 : 0};
            switch(this->type) {
                case PROP_TYPE_INT: {
                    static std::unordered_map<std::string, std::string> kPrefixMapping{
                            // will be handled manually
                            // { "m_b", "bool" },
                            { "m_h", "EntityHandle" },

                            { "m_i", "int" },
                            { "m_un", "uint32_t" },
                            { "m_n", "int32_t" },
                    };

                    if(this->name.starts_with("m_bHas")) {
                        sout << "  NET_CLASS_VAR_S(has_" << make_snake_case(this->name.substr(6)) << ", bool, 0x" << std::hex << this->offset << ");\n";
                    } else if(this->name.starts_with("m_bIs")) {
                        sout << "  NET_CLASS_VAR_S(is_" << make_snake_case(this->name.substr(5)) << ", bool, 0x" << std::hex << this->offset << ");\n";
                    } else if(this->name.starts_with("m_b")) {
                        sout << "  NET_CLASS_VAR_S(is_" << make_snake_case(this->name.substr(3)) << ", bool, 0x" << std::hex << this->offset << ");\n";
                    } else {
                        std::string type_class{"int"};
                        for(const auto& [ prefix, implied_type ] : kPrefixMapping) {
                            if(this->name.starts_with(prefix)) {
                                prefix_length = prefix.length();
                                type_class = implied_type;
                            }
                        }

                        sout << "  NET_CLASS_VAR_S(get_" << make_snake_case(this->name.substr(prefix_length)) << ", " << type_class << ", 0x" << std::hex << this->offset << ");\n";
                    }
                    break;
                }

                case PROP_TYPE_FLOAT:
                    if(this->name.starts_with("m_fl") && isupper(this->name[4])) {
                        prefix_length = 4;
                    } else if(this->name.starts_with("m_f") && isupper(this->name[3])) {
                        prefix_length = 3;
                    }
                    sout << "  NET_CLASS_VAR_S(get_" << make_snake_case(this->name.substr(prefix_length)) << ", float, 0x" << std::hex << this->offset << ");\n";
                    break;

                case PROP_TYPE_VECTOR:
                    if(this->name.starts_with("m_vec") && isupper(this->name[5])) {
                        prefix_length = 5;
                    }

                    sout << "  NET_CLASS_VAR_S(get_" << make_snake_case(this->name.substr(prefix_length)) << ", Vector3f, 0x" << std::hex << this->offset << ");\n";
                    break;

                case PROP_TYPE_STRING:
                    if(this->name.starts_with("m_sz") && isupper(this->name[4])) {
                        prefix_length = 4;
                    }

                    sout << "  NET_CLASS_VAR_C(get_" << make_snake_case(this->name.substr(prefix_length)) << ", 0x" << std::hex << this->offset << ", 0x" << this->str_buffer_size << ");\n";
                    break;

                case PROP_TYPE_VECTOR_XY:
                case PROP_TYPE_ARRAY:
                case PROP_TYPE_DATA_TABLE:
                    sout << "  /* TODO: " << this->name << " of type " << this->type << "*/\n";
                    break;

                default:
                    sout << " #error \"Unknown property type for " << this->name << " of type " << this->type << "\"\n";
                    return;
            }
        }
    };

    uint32_t class_id{0};
    std::string name;
    std::string super_class;
    std::vector<property> properties{};

    bool generated{false};

    void generate(std::ostream& sout) {
        sout << "DEFINE_NET_CLASS(" << this->name << ", 0x" << std::hex << this->class_id << ", 0x00, " << this->super_class << ");\n";
        std::sort(this->properties.begin(), this->properties.end(), [](const property& a, const property& b) {
            return a.offset < b.offset;
        });
        for(const auto& property : this->properties) {
            property.generate(sout);
        }
        sout << "END_NET_CLASS(" << this->name << ");\n";
    }
};

bool netvar::dump_all(std::string &error) {
    std::fstream fout{};
    fout.open("netvars.txt", std::fstream::out);
    if(!fout.is_open()) {
        error = "failed to open output file";
        return false;
    }
//    DEFINE_NET_CLASS(CPlantedC4, 0x00, CBaseEntity);
//        NET_CLASS_VAR_S(is_bomb_ticking, bool, 0x2990);
//        NET_CLASS_VAR_S(get_bomb_site, uint8_t, 0x2994);
//        NET_CLASS_VAR_S(get_c4_blow, float, 0x29a0);
//        NET_CLASS_VAR_S(get_timer_length, float, 0x29a4);
//        NET_CLASS_VAR_S(get_defuse_length, float, 0x29b8);
//        NET_CLASS_VAR_S(get_defuse_count_down, float, 0x29bc);
//        NET_CLASS_VAR_S(is_bomb_defused, bool, 0x29c0);
//        NET_CLASS_VAR_S(get_bomb_defuser, uint32_t, 0x29c4); // Attention: This is a client handle!
//    END_NET_CLASS(CPlantedC4);

    std::optional<ClientClass> current_class{netvar::get_class_list_head()};
    std::vector<class_definition> class_definitions{};
    class_definitions.reserve(1024);

    while(current_class.has_value()) {
        auto recv_table = current_class->get_recv_table();

        auto& class_definition = class_definitions.emplace_back();
        class_definition.name = current_class->get_name();
        class_definition.class_id = current_class->get_class_id();
        class_definition.super_class = kClassInheritance.contains(class_definition.name) ? kClassInheritance[class_definition.name] : "netvar::class_base";
        class_definition.properties.reserve(recv_table->get_property_count());

        //fout << std::dec << current_class->get_class_id() << ": " << current_class->get_name() << " (" << recv_table->get_name() << " | " << recv_table->get_property_count() << ")" << "\n";
        for(size_t prop_index{0}; prop_index < recv_table->get_property_count(); prop_index++) {
            auto property = recv_table->get_property(prop_index);
            auto property_offset = property.get_offset();
            if(!property_offset) {
                continue;
            }

            auto& property_definition = class_definition.properties.emplace_back();
            property_definition.name = property.get_name();
            property_definition.offset = property.get_offset();
            property_definition.type = property.get_recv_type();
            property_definition.str_buffer_size = property.get_string_buffer_size();
        }

        current_class = current_class->get_next_class();
    }

    std::stable_sort(class_definitions.begin(), class_definitions.end(), [](const auto& a, const auto& b) {
        return a.class_id < b.class_id;
    });

    std::vector<std::string> defined_classes{ {"netvar::class_base"} };
    defined_classes.reserve(class_definitions.size() + 1);

    while(true) {
        size_t emit_count{0};
        for(auto& definition : class_definitions) {
            if(definition.generated) {
                continue;
            }

            if(std::find(defined_classes.begin(), defined_classes.end(), definition.super_class) == defined_classes.end()) {
                continue;
            }

            definition.generated = true;
            emit_count += 1;

            definition.generate(fout);
            defined_classes.push_back(definition.name);
        }

        if(!emit_count) {
            break;
        }
    }

    for(auto& definition : class_definitions) {
        if (definition.generated) {
            continue;
        }

        fout << "#error \"Missing super class for " << definition.name << " (" << definition.super_class << ")\"\n";
    }
    return true;
}

ClientClass netvar::get_class_list_head() {
    return ClientClass{ClientAddress + (uint32_t) hazedumper::signatures::dwGetAllClasses};
}

std::optional<ClientClass> netvar::find_class(const std::string_view &class_name) {
    std::optional<ClientClass> current_class{netvar::get_class_list_head()};
    while(current_class.has_value()) {
        if(current_class->get_name() == class_name) {
            break;
        }

        current_class = current_class->get_next_class();
    }

    return current_class;
}

auto ClientClass::find_offset(const std::string_view &var_name) const -> std::optional<uint32_t> {
    auto recv_table = this->get_recv_table();
    for(size_t prop_index{0}; prop_index < recv_table->get_property_count(); prop_index++) {
        auto property = recv_table->get_property(prop_index);
        if(property.get_name() != var_name) {
            continue;
        }

        return std::make_optional(property.get_offset());
    }

    return std::nullopt;
}