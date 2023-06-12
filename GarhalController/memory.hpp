//
// Created by WolverinDEV on 04/06/2023.
//

#pragma once

#include "./kernelinterface.hpp"
#include <optional>
#include <memory>

extern std::unique_ptr<KeInterface> Driver;
extern uint32_t ProcessId;

// CSGO memory API
namespace memory {
    template <size_t N>
    using offsets_t = std::array<uint32_t, N>;

    template <typename T, size_t N>
    [[nodiscard]]
    inline bool dereferenced_read(uint32_t address, const offsets_t<N>& offsets, T& target) {
        return Driver->ReadVirtualMemoryEx(ProcessId, address, offsets.data(), offsets.size(), &target, sizeof(T));
    }

    template <typename T, size_t N>
    [[nodiscard]]
    inline std::optional<T> dereferenced_read(uint32_t address, const offsets_t<N>& offsets) {
        auto result = std::make_optional<T>();
        if(!memory::dereferenced_read<T, N>(address, offsets, *result)) {
            return std::nullopt;
        }

        return result;
    }

    template <typename T>
    [[nodiscard]]
    inline bool read(uint32_t address, T& target) {
        return memory::dereferenced_read<T, 0>(address, offsets_t<0>{}, target);
    }

    template <typename T>
    [[nodiscard]]
    inline std::optional<T> read(uint32_t address) {
        return memory::dereferenced_read<T, 0>(address, offsets_t<0>{});
    }

    [[nodiscard]]
    inline std::optional<std::string> read_cstring(uint32_t address, size_t max_length = 64) {
        auto result = std::make_optional<std::string>();
        result->resize(max_length);

        if(!Driver->ReadVirtualMemory(ProcessId, address, result->data(), result->length())) {
            return std::nullopt;
        }

        auto length = result->find_first_of('\0');
        if(length == std::string::npos) {
            return std::nullopt;
        }

        result->resize(length);
        return result;
    }

    template <typename... Args>
    inline uint32_t dereference(uint32_t address, Args... offset) {
        offsets_t<sizeof...(Args)> offsets{((uint32_t) offset)...};
        return memory::dereferenced_read<uint32_t>(address, offsets).value_or(0);
    }
}