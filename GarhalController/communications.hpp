#pragma once

#include <Windows.h>

/* IOCTL Codes needed for our driver */

// Request to read virtual user memory (memory of a program) from kernel space
#define IO_READ_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0666 /* Our Custom Code */, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

// Request to write virtual user memory (memory of a program) from kernel space
#define IO_WRITE_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0667 /* Our Custom Code */, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

// Request to retrieve the process id of csgo process, from kernel space
#define IO_GET_ID_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0668 /* Our Custom Code */, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

// Request to retrieve the base address of client.dll in csgo.exe from kernel space
#define IO_GET_MODULE_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0669 /* Our Custom Code */, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

// Request to retrieve the base address of engine.dll in csgo.exe from kernel space
#define IO_GET_ENGINE_MODULE_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0670 /* Our Custom Code */, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

// Request size of Client.dll
#define IO_GET_MODULE_REQUEST_LENGTH CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0671 /* Our Custom Code */, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

// Request size of Engine.dll
#define IO_GET_ENGINE_MODULE_REQUEST_LENGTH CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0672 /* Our Custom Code */, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

// Order driver to apply full protection on Controller
#define IO_PROTECT_CONTROLLER CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0673 /* Our Custom Code */, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)

// Order driver to apply full protection on RankReader
#define IO_PROTECT_RANKREADER CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0674 /* Our Custom Code */, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)

#define IO_FIND_ENTITIES_REQUEST CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0675 /* Our Custom Code */, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)

typedef struct _KERNEL_READ_REQUEST
{
    ULONG process_id;
    ULONG address;

    const UINT* offset_buffer;
    size_t offset_count;

    PVOID target_buffer;
    ULONG byte_count;

} KERNEL_READ_REQUEST, * PKERNEL_READ_REQUEST;

typedef struct _KERNEL_WRITE_REQUEST
{
	ULONG ProcessId;

	ULONG Address;
	PVOID pBuff;
	ULONG Size;

} KERNEL_WRITE_REQUEST, * PKERNEL_WRITE_REQUEST;


typedef struct _RTL_PROCESS_MODULE_INFORMATION
{
	HANDLE Section;
	PVOID MappedBase;
	PVOID ImageBase;
	ULONG ImageSize;
	ULONG Flags;
	USHORT LoadOrderIndex;
	USHORT InitOrderIndex;
	USHORT LoadCount;
	USHORT OffsetToFileName;
	UCHAR FullPathName[256];
} RTL_PROCESS_MODULE_INFORMATION, * PRTL_PROCESS_MODULE_INFORMATION;

typedef struct _RTL_PROCESS_MODULES
{
	ULONG NumberOfModules;
	RTL_PROCESS_MODULE_INFORMATION Modules[1];
} RTL_PROCESS_MODULES, * PRTL_PROCESS_MODULES;

typedef struct _KERNEL_FIND_ENTITIES_REQUEST
{
    ULONG process_id;
    ULONG entity_table_address;
    size_t entity_table_size;

    /* Needs to hold at least entity_table_size uint32_t */
    PVOID class_id_buffer;
} KERNEL_FIND_ENTITIES_REQUEST, *PKERNEL_FIND_ENTITIES_REQUEST;