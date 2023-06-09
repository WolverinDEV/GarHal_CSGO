//
// Created by WolverinDEV on 08/06/2023.
//

#pragma once

#include <cstdint>
#include <string_view>
#include <optional>
#include "./memory.hpp"
#include "./vector.h"

namespace netvar {
    struct class_base {
    public:
        explicit class_base(uint32_t address) noexcept : address{address} {}

        uint32_t address{0};
    };

    namespace impl {
        template <typename T, typename std::enable_if_t<std::is_base_of_v<netvar::class_base, T>, int> = 0>
        inline auto array_entry_size() noexcept -> size_t {
            return T::kClassSize;
        }

        template <typename T, typename std::enable_if_t<std::is_floating_point_v<T> || std::is_integral_v<T>, int> = 0>
        inline auto array_entry_size() noexcept -> size_t {
            return sizeof(T);
        }

        template <typename T, typename std::enable_if_t<std::is_base_of_v<netvar::class_base, T>, int> = 0>
        inline T read_value(uint32_t address) {
            return T{address};
        }

        template <typename T, typename std::enable_if_t<std::is_base_of_v<netvar::class_base, std::remove_pointer_t<T>> && std::is_pointer_v<T>, int> = 0>
        inline std::optional<std::remove_pointer_t<T>> read_value(uint32_t address) {
            auto target_address = memory::dereference(address);
            if(!target_address) {
                return std::nullopt;
            }

            return std::make_optional<std::remove_pointer_t<T>>(target_address);
        }

        template <typename T, typename std::enable_if_t<
                (std::is_floating_point_v<T> || std::is_integral_v<T> || std::is_trivially_copyable_v<T>) && !(std::is_pointer_v<T> || std::is_base_of_v<netvar::class_base, std::remove_pointer_t<T>>), int> = 0>
        inline T read_value(uint32_t address) {
            return memory::read<T>(address).value_or(T{});
        }

        template <typename T, typename std::enable_if_t<
                std::is_same_v<std::string, T>, int> = 0>
        inline std::string read_value(uint32_t address, size_t max_length = 64) {
            return memory::read_cstring(
                    address,
                    max_length
            ).value_or("");
        }

        template <typename T>
        inline auto read_array(uint32_t address, uint32_t offset, size_t index) {
            auto target_address = address + offset + (index * array_entry_size<T>());
            return read_value<T>(target_address);
        }

        template <typename T, typename std::enable_if_t<std::is_base_of_v<netvar::class_base, T>, int> = 0>
        inline auto read_array_p(uint32_t address, uint32_t offset, size_t index) {
            auto target_address = memory::dereference(address, offset);
            return read_value<T>(target_address + index * array_entry_size<T>());
        }

        template <typename T, typename std::enable_if_t<!std::is_base_of_v<netvar::class_base, T>, int> = 0>
        inline auto read_array_p(uint32_t address, uint32_t offset, size_t index) {
            auto target_address = memory::dereference(address, offset);
            return read_value<T>(target_address + index * array_entry_size<T>());
        }
    }

    #define DEFINE_NET_CLASS(name, size, parent) \
    struct name : parent {                       \
    public:                              \
        constexpr static auto kClassSize{size}; \
        explicit name(uint32_t address) noexcept : parent(address) {}; \
                                         \
        inline auto operator!=(const name& other) const -> bool { \
            return this->address != other.address; \
        } \

    // Define a simple class variable
    #define NET_CLASS_VAR_S(name, type, offset) \
        [[nodiscard]] \
        inline auto name() const noexcept { \
            return ::netvar::impl::read_value<type>(this->address + (offset)); \
        };

    // Define a net class var which contains a string
    #define NET_CLASS_VAR_C(name, offset, length) \
        [[nodiscard]] \
        inline auto name() const noexcept { \
            return ::netvar::impl::read_value<std::string>(memory::dereference(this->address, offset), length); \
        };

    // Define a net class var which contains an array
    #define NET_CLASS_VAR_A(name, type, offset) \
        [[nodiscard]] \
        inline auto name(size_t index) const noexcept { \
            return ::netvar::impl::read_array<type>(this->address, offset, index); \
        };

    // Define a net class var which contains an array pointer
    #define NET_CLASS_VAR_AP(name, type, offset) \
        [[nodiscard]] \
        inline auto name(size_t index) const noexcept { \
            return ::netvar::impl::read_array_p<type>(this->address, offset, index); \
        };

    #define END_NET_CLASS(_class_name) \
    }

struct RecvTable;
    DEFINE_NET_CLASS(RecvProp, 0x3C, netvar::class_base);
        NET_CLASS_VAR_S(get_offset, uint32_t, 0x2C);
        NET_CLASS_VAR_C(get_name, 0, 64);
        //NET_CLASS_VAR_R(get_data_table, RecvTable, 0x28);
    END_NET_CLASS(RecvProp);

    DEFINE_NET_CLASS(RecvTable, 0x00, netvar::class_base);
        NET_CLASS_VAR_AP(get_property, RecvProp, 0x00);
        NET_CLASS_VAR_S(get_property_count, uint32_t, 0x04);
        NET_CLASS_VAR_C(get_name, 0x0C, 64);
    END_NET_CLASS(RecvTable);

    DEFINE_NET_CLASS(ClientClass, 0x00, netvar::class_base);
        NET_CLASS_VAR_C(get_name, 0x08, 64);
        NET_CLASS_VAR_S(get_recv_table, RecvTable*, 0x0C);
        NET_CLASS_VAR_S(get_next_class, ClientClass*, 0x10);
        NET_CLASS_VAR_S(get_class_id, int, 0x14);

        [[nodiscard]]
        auto find_offset(const std::string_view& /* property */) const -> std::optional<uint32_t>;
    END_NET_CLASS(ClientClass);

    extern bool dump_all(std::string& /* error */);
    extern ClientClass get_class_list_head();
    extern std::optional<ClientClass> find_class(const std::string_view& /* class name */);
}

namespace entities {
    DEFINE_NET_CLASS(CBaseEntity, 0x00, netvar::class_base);
        NET_CLASS_VAR_S(get_origin, Vector3f, 0x138);
    END_NET_CLASS(CBaseEntity);

    DEFINE_NET_CLASS(CCSPlayer, 0x00, CBaseEntity);
        NET_CLASS_VAR_S(has_heavy_armor, bool, 0x117c1);
        NET_CLASS_VAR_S(get_armor_value, int, 0x117cc);
    END_NET_CLASS(CBaseEntity);

    DEFINE_NET_CLASS(CPlantedC4, 0x00, CBaseEntity);
        NET_CLASS_VAR_S(is_bomb_ticking, bool, 0x2990);
        NET_CLASS_VAR_S(get_bomb_site, uint8_t, 0x2994);
        NET_CLASS_VAR_S(get_c4_blow, float, 0x29a0);
        NET_CLASS_VAR_S(get_timer_length, float, 0x29a4);
        NET_CLASS_VAR_S(get_defuse_length, float, 0x29b8);
        NET_CLASS_VAR_S(get_defuse_count_down, float, 0x29bc);
        NET_CLASS_VAR_S(is_bomb_defused, bool, 0x29c0);
        NET_CLASS_VAR_S(get_bomb_defuser, uint32_t, 0x29c4); // Attention: This is a client handle!
    END_NET_CLASS(CPlantedC4);
}