//
// Created by WolverinDEV on 08/06/2023.
//

#include "./netvar.h"
#include "./data.hpp"
#include "./offsets.hpp"
#include "./memory.hpp"
#include <fstream>
#include <iostream>

using namespace netvar;

bool netvar::dump_all(std::string &error) {
    std::fstream fout{};
    fout.open("netvars.txt", std::fstream::out);
    if(!fout.is_open()) {
        error = "failed to open output file";
        return false;
    }

    std::optional<ClientClass> current_class{netvar::get_class_list_head()};
    while(current_class.has_value()) {
        auto recv_table = current_class->get_recv_table();

        fout << std::dec << current_class->get_class_id() << ": " << current_class->get_name() << " (" << recv_table->get_name() << " | " << recv_table->get_property_count() << ")" << "\n";
        for(size_t prop_index{0}; prop_index < recv_table->get_property_count(); prop_index++) {
            auto property = recv_table->get_property(prop_index);
            fout << std::hex << "  " << prop_index << ": " << property.get_name() << " (" << property.get_offset() << ")\n";
        }
        current_class = current_class->get_next_class();
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