#pragma once
#pragma warning( disable : 4101 4244)

#include "communications.hpp"

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
        return ReadVirtualMemory<type>(ProcessId, ReadAddress, sizeof(type));
    }

    [[nodiscard("read success should be checked")]]
    bool ReadVirtualMemoryBuffer(ULONG ProcessId, ULONG address, void* buffer, size_t size) const
    {
        KERNEL_READ_REQUEST ReadRequest;

        ReadRequest.ProcessId = ProcessId;
        ReadRequest.Address = address;

        ReadRequest.pBuff = buffer;
        ReadRequest.Size = size;

        return (DeviceIoControl(hDriver, IO_READ_REQUEST, &ReadRequest, sizeof(ReadRequest), &ReadRequest, sizeof(ReadRequest), nullptr, nullptr) == TRUE);
    }

	template <typename type>
	type ReadVirtualMemory(ULONG ProcessId, ULONG ReadAddress, SIZE_T Size)
	{
		// allocate a buffer with specified type to allow our driver to write our wanted data inside this buffer
		type Buffer;

		KERNEL_READ_REQUEST ReadRequest;


		ReadRequest.ProcessId = ProcessId;
		ReadRequest.Address = ReadAddress;

		//send the 'address' of the buffer so our driver can know where to write the data
		ReadRequest.pBuff = &Buffer;
		ReadRequest.Size = Size;

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

    [[nodiscard("read success should be checked")]]
    bool ReadSpecial(ULONG ProcessId, DWORD dwAddress, LPVOID lpBuffer, DWORD dwSize) const
	{
		KERNEL_READ_REQUEST ReadRequest;

		ReadRequest.ProcessId = ProcessId;
		ReadRequest.Address = dwAddress;

		ReadRequest.pBuff = &lpBuffer;

		ReadRequest.Size = dwSize;

		return (DeviceIoControl(hDriver, IO_READ_REQUEST, &ReadRequest, sizeof(ReadRequest), &ReadRequest, sizeof(ReadRequest), nullptr, nullptr) == TRUE);
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

    [[nodiscard]]
	BOOL DataCompare(const BYTE* pData, const BYTE* pMask, const char* pszMask) const
	{
		for (; *pszMask; ++pszMask, ++pData, ++pMask)
		{
			if (*pszMask == 'x' && *pData != *pMask)
			{
				return FALSE;
			}
		}
		return (*pszMask == 0);
	}

    [[nodiscard]]
	DWORD Scan(ULONG ProcessId, DWORD dwStart, DWORD dwSize, const char* pSignature, const char* pMask) const
	{
		BYTE* pRemote = new BYTE[dwSize];
		if (!ReadSpecial(ProcessId, dwStart, pRemote, dwSize))
		{
			delete[] pRemote;
			return NULL;
		}
		for (DWORD dwIndex = 0; dwIndex < dwSize; dwIndex++)
		{
			if (DataCompare((const BYTE*)(pRemote + dwIndex), (const BYTE*)pSignature, pMask))
			{
				delete[] pRemote;
				return (dwStart + dwIndex);
			}
		}
		delete[] pRemote;
		return NULL;
	}
};