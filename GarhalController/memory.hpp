//
// Created by WolverinDEV on 04/06/2023.
//

#pragma once

#include "./kernelinterface.hpp"
extern std::unique_ptr<KeInterface> Driver;
extern DWORD ProcessId;

// CSGO memory API
namespace memory {
    inline uint32_t dereference(uint32_t address);

    namespace internal {
        template <typename T>
        uint32_t dereference_unwrap(uint32_t address, uint32_t offset) {
            if(!address) {
                return 0;
            }

            return ::memory::dereference(address + offset);
        }

        template <typename T, typename... Args>
        uint32_t dereference_unwrap(uint32_t address, uint32_t offset, Args... offsets) {
            auto dereferenced = dereference_unwrap<T>(address, offset);
            return dereference_unwrap<Args...>(dereferenced, offsets...);
        }
    }

    template <typename T>
    [[nodiscard]]
    bool read(uint32_t address, T& target) {
        return Driver->ReadVirtualMemoryBuffer(ProcessId, address, &target, sizeof(T));
    }

    template <typename T>
    [[nodiscard]]
    std::optional<T> read(uint32_t address) {
        auto result = std::make_optional<T>();
        if(!memory::read<T>(address, *result)) {
            return std::nullopt;
        }

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