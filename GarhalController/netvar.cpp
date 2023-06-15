//
// Created by WolverinDEV on 08/06/2023.
//

#include "./netvar.h"
#include "./data.hpp"
#include "./offsets.hpp"
#include <fstream>
#include <unordered_map>
#include <iostream>
#include <format>

using namespace netvar;

static std::unordered_map<std::string_view, std::pair<std::string, std::string>> kVarOverrides {
        { "m_iRecoilIndex", { "int", "get_recoil_index_i" } },
        { "m_flRecoilIndex", { "float", "get_recoil_index_f" } },
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

void parse_property_name(const std::string_view& name, std::string& type, std::string& normalized_name) {
    if(kVarOverrides.contains(name)) {
        auto& override_info = kVarOverrides[name];
        type = override_info.first;
        normalized_name = override_info.second;
        return;
    }

    static std::unordered_map<std::string, std::string> kPrefixMapping{
            // will be handled manually
            // { "m_b", "bool" },

            { "m_vec", "Vector3f" },
            { "m_h", "EntityHandle" },

            { "m_fl", "float" },
            { "m_f", "float" },

            { "m_i", "int" },
            { "m_un", "uint32_t" },
            { "m_n", "int32_t" },
    };

    if(name.starts_with("m_bHas")) {
        type = "bool";
        normalized_name = "has_" + make_snake_case(name.substr(6));
    } else if(name.starts_with("m_bIs")) {
        type = "bool";
        normalized_name = "is_" + make_snake_case(name.substr(5));
    } else if(name.starts_with("m_b")) {
        type = "bool";
        normalized_name = "is_" + make_snake_case(name.substr(3));
    } else {
        /* do not set type as we don't know what the type is */
        size_t prefix_length{name.starts_with("m_") ? (size_t) 2 : 0};
        for(const auto& [ prefix, implied_type ] : kPrefixMapping) {
            /* starts with prefix and next char is upper case */
            if(prefix.length() + 1 < name.size() && name.starts_with(prefix) && isupper(name[prefix.length()])) {
                prefix_length = prefix.length();
                type = implied_type;
                break;
            }
        }

        normalized_name = "get_" + make_snake_case(name.substr(prefix_length));
    }
}

class property {
public:
    virtual void generate(std::ostream& sout) const = 0;

    std::string name{};
    uint32_t offset{0};
};

class property_dt_reference : public property {
public:
    void generate(std::ostream &sout) const override {
        if(this->name.find_first_of('[') != std::string::npos || this->name.find_first_of('.') != std::string::npos) {
            sout << "  /* TODO: fix name for dt reference " << this->name << " */\n";
            return;
        }

        sout << "  /* data table reference for " << this->dt_name << " */\n";

//        std::string value_type, normalized_name;
//        parse_property_name(this->name, value_type, normalized_name);
//        size_t prefix_size{0};
//        if(this->name.starts_with("DT_")) {
//            prefix_size = 3;
//        }
//        sout << "  NET_CLASS_VAR_DTR(as_" << make_snake_case(this->name.substr(prefix_size)) << ", " << this->dt_name << ");\n";
    }

    std::string dt_name{};
};

class property_dt_array : public property {
public:
    void generate(std::ostream &sout) const override {
        if(this->name.find_first_of('[') != std::string::npos || this->name.find_first_of('.') != std::string::npos) {
            sout << "  /* TODO: fix name for array " << this->name  << " */\n";
            return;
        }

        std::string value_type, normalized_name;
        value_type = "int"; /* fallback value */
        parse_property_name(this->name, value_type, normalized_name);

        sout << "  NET_CLASS_VAR_A(" << normalized_name << ", " << value_type << ", 0x" << std::hex << this->offset << ", /* element count */ 0x" << this->element_count << ", /* element size */ 0x" << this->element_size << ");\n";
    }

    size_t element_count{};
    size_t element_size{};
};

class property_string : public property {
public:
    void generate(std::ostream &sout) const override {
        if(this->name.find_first_of('[') != std::string::npos || this->name.find_first_of('.') != std::string::npos) {
            sout << "  /* TODO: fix name for string " << this->name << " */\n";
            return;
        }

        size_t prefix_length{this->name.starts_with("m_") ? (size_t) 2 : 0};
        if(this->name.starts_with("m_sz") && isupper(this->name[4])) {
            prefix_length = 4;
        }

        sout << "  NET_CLASS_VAR_C(get_" << make_snake_case(this->name.substr(prefix_length)) << ", 0x" << std::hex << this->offset << ", /* max length */ 0x" << this->max_length << ");\n";
    }

    size_t max_length{};
};

class property_primitive : public property {
public:
    void generate(std::ostream &sout) const override {
        if(this->name.find_first_of('[') != std::string::npos || this->name.find_first_of('.') != std::string::npos) {
            sout << "  /* TODO: fix name for " << this->name << " of type " << this->type << " */\n";
            return;
        }

        std::string value_type, normalized_name;
        parse_property_name(this->name, value_type, normalized_name);

        switch(this->type) {
            case PROP_TYPE_INT: {
                if(value_type.empty()) {
                    value_type = "int";
                }

                sout << "  NET_CLASS_VAR_S(" << normalized_name << ", " << value_type << ", 0x" << std::hex << this->offset << ");\n";
                break;
            }

            case PROP_TYPE_FLOAT:
                sout << "  NET_CLASS_VAR_S(" << normalized_name << ", float, 0x" << std::hex << this->offset << ");\n";
                break;

            case PROP_TYPE_VECTOR:
                sout << "  NET_CLASS_VAR_S(" << normalized_name << ", Vector3f, 0x" << std::hex << this->offset << ");\n";
                break;


            case PROP_TYPE_VECTOR_XY:
                sout << "  /* TODO: " << normalized_name << " as PROP_TYPE_VECTOR_XY */\n";
                break;

            default:
                sout << " #error \"property " << this->name << " of type " << this->type << " is not a primative type\"\n";
                return;
        }
    }

    uint32_t type{PROP_TYPE_INT};
};

struct class_definition {
    uint32_t class_id{0};
    std::string name;
    std::string name_dt;
    std::string super_class;
    std::string super_class_dt;
    std::vector<std::unique_ptr<property>> properties{};

    std::vector<std::string> depended_dt_classes{};

    bool generated{false};

    void generate(std::ostream& sout) {
        sout << "DEFINE_NET_CLASS(" << this->name << ", 0x" << std::hex << this->class_id << ", 0x00, " << this->super_class << ");\n";

        std::sort(this->properties.begin(), this->properties.end(), [](const auto& a, const auto& b) {
            return a->offset < b->offset;
        });
        for(const auto& property : this->properties) {
            sout << "  /* " << property->name << " at " << std::hex << property->offset << " */\n";
            property->generate(sout);
        }

        sout << "END_NET_CLASS(" << this->name << ");\n";
    }
};

bool fill_class_info_from_recv_table(std::unordered_map<std::string, RecvTable>& discovered_tables, class_definition& class_definition, const RecvTable& recv_table, std::string& error) {
    class_definition.name_dt = recv_table.get_name();
    class_definition.properties.reserve(recv_table.get_property_count());
    class_definition.super_class_dt = "netvar::class_base";

    for(size_t prop_index{0}; prop_index < recv_table.get_property_count(); prop_index++) {
        auto property = recv_table.get_property(prop_index);
        auto property_name = property.get_name();
        auto property_type = property.get_recv_type();

        if(property_type == PROP_TYPE_DATA_TABLE) {
            auto data_table = property.get_data_table();
            if(property_name == "baseclass") {
                class_definition.super_class_dt = data_table->get_name();
                continue;
            } else if(data_table->get_name() == property_name) {
                uint32_t element_count{data_table->get_property_count()};
                uint32_t element_size;

                if(element_count == 0) {
                    error = std::format("encountered array with zero elements at 0x{:x}", property.address);
                    return false;
                } else if(element_count == 1) {
                    /* element size is unknown but we do not need to care */
                    element_size = 0;
                } else {
                    auto array_prop_2 = data_table->get_property(1);
                    if(array_prop_2.get_parent_array_prop_name() != property_name) {
                        error = "array inconsistent name (expected: " + property_name + " got: " + array_prop_2.get_parent_array_prop_name() + ")";
                        return false;
                    }

                    element_size = array_prop_2.get_offset();
                }

                // std::cout << " array " << property_name << " (size: " << std::hex << array_prop_2.get_offset() << ")" << " at " << std::hex << property.address << "\n";
                auto property_definition = std::make_unique<property_dt_array>();

                property_definition->name = property_name;
                property_definition->offset = property.get_offset();
                property_definition->element_count = element_count;
                property_definition->element_size = element_size;

                class_definition.properties.push_back(std::move(property_definition));
                continue;
            }

            auto property_definition = std::make_unique<property_dt_reference>();

            property_definition->name = property_name;
            property_definition->offset = 0;
            property_definition->dt_name = data_table->get_name();

            class_definition.properties.push_back(std::move(property_definition));
            class_definition.depended_dt_classes.push_back(data_table->get_name());

            //std::cout << " data table " << property_name << " at " << std::hex << property.get_address() << "\n";
            discovered_tables.insert(std::make_pair(data_table->get_name(), *data_table));
            continue;
        } else if(property_type == PROP_TYPE_STRING) {
            auto property_definition = std::make_unique<property_string>();

            property_definition->name = property_name;
            property_definition->offset = property.get_offset();
            property_definition->max_length = property.get_string_buffer_size();

            class_definition.properties.push_back(std::move(property_definition));
        } else if(property_type == PROP_TYPE_INT || property_type == PROP_TYPE_FLOAT || property_type == PROP_TYPE_VECTOR || property_type == PROP_TYPE_VECTOR_XY) {
            auto property_definition = std::make_unique<property_primitive>();

            property_definition->name = property_name;
            property_definition->offset = property.get_offset();
            property_definition->type = property.get_recv_type();

            class_definition.properties.push_back(std::move(property_definition));
        } else if(property_type == PROP_TYPE_ARRAY) {

        } else {
            error = std::format("invalid property type {} for {} at 0x{:x}", property_type, property_name, property.address);
            return false;
        }
    }

    return true;
}

bool netvar::dump_all(std::string &error) {
    std::fstream fout{};
    fout.open("netvars.txt", std::fstream::out);
    if(!fout.is_open()) {
        error = "failed to open output file";
        return false;
    }

    std::optional<ClientClass> current_class{netvar::get_class_list_head()};
    std::vector<class_definition> class_definitions{};
    class_definitions.reserve(1024);

    std::unordered_map<std::string, RecvTable> discovered_tables{};

    while(current_class.has_value()) {
        auto recv_table = current_class->get_recv_table();

        auto& class_definition = class_definitions.emplace_back();
        class_definition.name = current_class->get_name();
        class_definition.class_id = current_class->get_class_id();

        std::cout << std::dec << current_class->get_class_id() << ": " << current_class->get_name() << " (" << recv_table->get_name() << " | " << recv_table->get_property_count() << ")" << " at " << std::hex << current_class->address << "\n";
        if(!fill_class_info_from_recv_table(discovered_tables, class_definition, *recv_table, error)) {
            return false;
        }

        current_class = current_class->get_next_class();
    }

    while(!discovered_tables.empty()) {
        auto tables = discovered_tables;
        discovered_tables.clear();

        for(const auto& [ table_name, table ] : tables) {
            auto dt_definition = std::find_if(class_definitions.begin(), class_definitions.end(), [&](const auto& entry) {
                return entry.name == table_name;
            });
            if(dt_definition != class_definitions.end()) {
                /* dt class already defined */
                continue;
            }

            auto& class_definition = class_definitions.emplace_back();
            class_definition.name = table_name;
            class_definition.class_id = 0;

            if(!fill_class_info_from_recv_table(discovered_tables, class_definition, table, error)) {
                return false;
            }
        }
    }

    std::stable_sort(class_definitions.begin(), class_definitions.end(), [](const auto& a, const auto& b) {
        return a.class_id < b.class_id;
    });

    std::vector<std::string> defined_classes_dt{{"netvar::class_base"} };
    defined_classes_dt.reserve(class_definitions.size() + 1);

    while(true) {
        size_t emit_count{0};
        for(auto& definition : class_definitions) {
            if(definition.generated) {
                continue;
            }

            if(definition.super_class_dt == "netvar::class_base") {
                /* class can be defined */
                definition.super_class = "netvar::class_base";
            } else {
                auto super_class = std::find_if(class_definitions.begin(), class_definitions.end(), [&](const auto& entry) {
                    return entry.name_dt == definition.super_class_dt;
                });

                if(super_class == class_definitions.end()) {
                    continue;
                }

                if(!super_class->generated) {
                    continue;
                }

                definition.super_class = super_class->name;
            }

            bool dependencies_cleared{true};
            for(const auto& dependent_dt_class : definition.depended_dt_classes) {
                auto dependent_class = std::find_if(class_definitions.begin(), class_definitions.end(), [&](const auto& entry) {
                    return entry.name_dt == dependent_dt_class;
                });

                if(dependent_class == class_definitions.end()) {
                    error = std::format("missing dependent dt class {} for {}", dependent_dt_class, definition.name);
                    return false;
                }

                if(!dependent_class->generated) {
                    dependencies_cleared = false;
                    break;
                }
            }

            if(!dependencies_cleared) {
                continue;
            }

            definition.generated = true;
            emit_count += 1;

            definition.generate(fout);
            defined_classes_dt.push_back(definition.name_dt);
        }

        if(!emit_count) {
            break;
        }
    }

    for(auto& definition : class_definitions) {
        if (definition.generated) {
            continue;
        }

        fout << "#error \"Missing super class or dependent dt class for " << definition.name << " (" << definition.super_class_dt << ")\"\n";
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