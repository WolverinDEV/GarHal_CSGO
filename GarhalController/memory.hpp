//
// Created by WolverinDEV on 04/06/2023.
//

#pragma once

#include "./kernelinterface.hpp"
#include <optional>
#include <memory>

extern std::unique_ptr<KeInterface> Driver;
extern DWORD ProcessId;

// CSGO memory API
namespace memory {
    inline uint32_t dereference(uint32_t address);

    namespace internal {
        template <typename T>
        inline uint32_t dereference_unwrap(uint32_t address, uint32_t offset) {
            if(!address) {
                return 0;
            }

            return ::memory::dereference(address + offset);
        }

        template <typename T, typename... Args>
        inline uint32_t dereference_unwrap(uint32_t address, uint32_t offset, Args... offsets) {
            auto dereferenced = dereference_unwrap<T>(address, offset);
            return dereference_unwrap<Args...>(dereferenced, offsets...);
        }
    }

    template <typename T>
    [[nodiscard]]
    inline bool read(uint32_t address, T& target) {
        return Driver->ReadVirtualMemoryBuffer(ProcessId, address, &target, sizeof(T));
    }

    template <typename T>
    [[nodiscard]]
    inline std::optional<T> read(uint32_t address) {
        auto result = std::make_optional<T>();
        if(!memory::read<T>(address, *result)) {
            return std::nullopt;
        }

        return result;
    }

    [[nodiscard]]
    inline std::optional<std::string> read_cstring(uint32_t address, size_t max_length = 64) {
        auto result = std::make_optional<std::string>();
        result->resize(max_length);

        if(!Driver->ReadVirtualMemoryBuffer(ProcessId, address, result->data(), result->length())) {
            return std::nullopt;
        }

        auto length = result->find_first_of('\0');
        if(length == std::string::npos) {
            return std::nullopt;
        }

        result->resize(length);
        return result;
    }

    inline uint32_t dereference(uint32_t address) {
        return memory::read<uint32_t>(address).value_or(0);
    }

    template <typename... Args>
    uint32_t dereference(uint32_t address, Args... offsets) {
        return internal::dereference_unwrap<Args...>(address, offsets...);
    }
}