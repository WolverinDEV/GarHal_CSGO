#pragma once
#pragma warning( disable : 4101 4244)

#include "communications.hpp"
#include <array>

// The interface handler for IOCTL. Thanks Zeromem.
class KeInterface
{
	
public:
	// Handle to driver
	HANDLE hDriver;
    bool noWrite;

	// Initializer
	explicit KeInterface(LPCSTR RegistryPath)
	{
		this->hDriver = CreateFileA(RegistryPath, GENERIC_READ | GENERIC_WRITE,
			FILE_SHARE_READ | FILE_SHARE_WRITE, nullptr, OPEN_EXISTING, 0, nullptr);
        this->noWrite = false;
	}

    [[nodiscard]]
    inline auto IsValid() const -> bool {
        return this->hDriver != INVALID_HANDLE_VALUE;
    }

    template <typename type>
    type ReadVirtualMemoryT(ULONG ProcessId, ULONG ReadAddress)
    {
        return ReadVirtualMemoryTV<type>(ProcessId, ReadAddress, sizeof(type));
    }

    [[nodiscard("read success should be checked")]]
    bool ReadVirtualMemoryEx(ULONG ProcessId, ULONG address, const uint32_t* offset_buffer, size_t offset_count, void* buffer, size_t size) const
    {
        KERNEL_READ_REQUEST ReadRequest;

        ReadRequest.process_id = ProcessId;
        ReadRequest.address = address;

        ReadRequest.offset_buffer = offset_buffer;
        ReadRequest.offset_count = offset_count;

        ReadRequest.target_buffer = buffer;
        ReadRequest.byte_count = size;

        return (DeviceIoControl(hDriver, IO_READ_REQUEST, &ReadRequest, sizeof(ReadRequest), &ReadRequest, sizeof(ReadRequest), nullptr, nullptr) == TRUE);
    }

    [[nodiscard("read success should be checked")]]
    bool ReadVirtualMemory(ULONG ProcessId, ULONG address, void* buffer, size_t size) const
    {
        KERNEL_READ_REQUEST ReadRequest;

        ReadRequest.process_id = ProcessId;
        ReadRequest.address = address;

        ReadRequest.offset_count = 0;
        ReadRequest.offset_buffer = nullptr;

        ReadRequest.target_buffer = buffer;
        ReadRequest.byte_count = size;

        return (DeviceIoControl(hDriver, IO_READ_REQUEST, &ReadRequest, sizeof(ReadRequest), &ReadRequest, sizeof(ReadRequest), nullptr, nullptr) == TRUE);
    }

	template <typename type>
	type ReadVirtualMemoryTV(ULONG ProcessId, ULONG ReadAddress, SIZE_T Size)
	{
		// allocate a buffer with specified type to allow our driver to write our wanted data inside this buffer
		type Buffer;

		KERNEL_READ_REQUEST ReadRequest;


		ReadRequest.process_id = ProcessId;
		ReadRequest.address = ReadAddress;

        ReadRequest.offset_count = 0;
        ReadRequest.offset_buffer = nullptr;

		//send the 'address' of the buffer so our driver can know where to write the data
		ReadRequest.target_buffer = &Buffer;
		ReadRequest.byte_count = Size;

		// send code to our driver with the arguments
		if (DeviceIoControl(
                hDriver,
                IO_READ_REQUEST,
                &ReadRequest, sizeof(ReadRequest),
                &ReadRequest, sizeof(ReadRequest),
                nullptr, nullptr
        ))
		{
			//return our buffer
			return Buffer;
		}

		return Buffer;
	}

    template <size_t N>
    [[nodiscard("read success should be checked")]]
    bool ReadEntityTableClasses(ULONG process_id, ULONG entity_table_address, std::array<uint32_t, N>& class_ids) const
    {
        KERNEL_FIND_ENTITIES_REQUEST request;

        request.process_id = process_id;
        request.entity_table_address = entity_table_address;
        request.entity_table_size = N;
        request.class_id_buffer = class_ids.data();

        return (DeviceIoControl(hDriver, IO_FIND_ENTITIES_REQUEST, &request, sizeof(request), &request, sizeof(request), nullptr, nullptr) == TRUE);
    }

	template <typename type>
	bool WriteVirtualMemory(ULONG ProcessId, ULONG WriteAddress, type WriteValue, SIZE_T WriteSize)
	{
        if(this->noWrite) {
            /*
             * Do not allow any operations which writes into CS memory.
             * With no write and as external application you're totally invisible (at least to the game itself).
             */
            return false;
        }

        if(!this->IsValid()) {
            return false;
        }

		DWORD Bytes;

		KERNEL_WRITE_REQUEST  WriteRequest;
		WriteRequest.ProcessId = ProcessId;
		WriteRequest.Address = WriteAddress;

		//send driver the 'address' of our specified type WriteValue so our driver can copy the data we want to write from this address to WriteAddress
		WriteRequest.pBuff = &WriteValue;

		WriteRequest.Size = WriteSize;

		if (DeviceIoControl(hDriver, IO_WRITE_REQUEST, &WriteRequest, sizeof(WriteRequest), nullptr, 0, &Bytes, nullptr))
		{
			return true;
		}
		return false;
	}

#pragma clang diagnostic push
#pragma ide diagnostic ignored "modernize-use-nodiscard"
    bool RequestProtection() const
	{
        if(!this->IsValid()) {
            return false;
        }

		return DeviceIoControl(hDriver, IO_PROTECT_CONTROLLER, nullptr, 0, nullptr, 0, nullptr, nullptr);
	}
#pragma clang diagnostic pop

    [[nodiscard]]
    DWORD GetTargetPid() const
	{
        if(!this->IsValid()) {
            return false;
        }

		ULONG Id;
		DWORD Bytes;

		if (DeviceIoControl(hDriver, IO_GET_ID_REQUEST, &Id, sizeof(Id),
			&Id, sizeof(Id), &Bytes, nullptr))
		{
			return Id;
		}

		return false;
	}

    [[nodiscard]]
    DWORD GetClientModule() const
	{
        if(!this->IsValid()) {
            return false;
        }

		ULONG Address;
		DWORD Bytes;

		if (DeviceIoControl(hDriver, IO_GET_MODULE_REQUEST, &Address, sizeof(Address),
			&Address, sizeof(Address), &Bytes, nullptr))
		{
			return Address;
		}
		return false;
	}

    [[nodiscard]]
    DWORD GetClientModuleSize() const
	{
        if(!this->IsValid()) {
            return false;
        }

		ULONG Address;
		DWORD Bytes;

		if (DeviceIoControl(hDriver, IO_GET_MODULE_REQUEST_LENGTH, &Address, sizeof(Address),
			&Address, sizeof(Address), &Bytes, nullptr))
		{
			return Address;
		}
		return false;
	}


	[[nodiscard]]
    DWORD GetEngineModule() const
	{
        if(!this->IsValid()) {
            return false;
        }

		ULONG Address;
		DWORD Bytes;

		if (DeviceIoControl(hDriver, IO_GET_ENGINE_MODULE_REQUEST, &Address, sizeof(Address),
			&Address, sizeof(Address), &Bytes, nullptr))
		{
			return Address;
		}
		return false;
	}

    [[nodiscard]]
	DWORD GetEngineModuleSize() const
	{
        if(!this->IsValid()) {
            return false;
        }

		ULONG Address;
		DWORD Bytes;

		if (DeviceIoControl(hDriver, IO_GET_ENGINE_MODULE_REQUEST_LENGTH, &Address, sizeof(Address),
			&Address, sizeof(Address), &Bytes, nullptr))
		{
			return Address;
		}
		return false;
	}
};