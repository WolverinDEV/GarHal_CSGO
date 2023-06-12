//
// Created by WolverinDEV on 09/06/2023.
//

#include "./netvar.h"
namespace entities {
    struct EntityHandle {
        uint32_t value{0};

        [[nodiscard]]
        inline auto get_entity_index() const -> size_t {
            return this->value & 0xFFF;
        }

        [[nodiscard]]
        inline auto is_valid() const -> bool {
            return this->value != 0xFFFFFFFF;
        }
    };

    #include "./netvars_gen.h"
}