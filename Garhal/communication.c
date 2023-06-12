#pragma warning( disable : 4100 4047 4024 4022 4201 4311 4057 4213 4189 4081 4189 4706 4214 4459 4273)

#include "data.h"
#include "messages.h"
#include "communication.h"
#include "memory.h"
#include "stdint.h"
#include "./ntos.h"

NTSTATUS CreateCall(PDEVICE_OBJECT DeviceObject, PIRP irp)
{
	irp->IoStatus.Status = STATUS_SUCCESS;
	irp->IoStatus.Information = 0;

	IoCompleteRequest(irp, IO_NO_INCREMENT);
	return STATUS_SUCCESS;
}

NTSTATUS CloseCall(PDEVICE_OBJECT DeviceObject, PIRP irp)
{
	irp->IoStatus.Status = STATUS_SUCCESS;
	irp->IoStatus.Information = 0;

	IoCompleteRequest(irp, IO_NO_INCREMENT);
	return STATUS_SUCCESS;
}

// Attention:
// You must be attached to the target process!
NTSTATUS DereferenceAddress(uint32_t address, uint32_t* offsets, size_t count, uint32_t* result) {
    uint32_t current_address = address;
    uint32_t next_address;
    size_t bytes_read;
    NTSTATUS status = STATUS_SUCCESS;

    size_t index;
    __try {
        for(index = 0; index < count; index++) {
            ProbeForRead((PVOID) (current_address + offsets[index]), 4, 1);
            RtlCopyMemory(&next_address, (PVOID) (current_address + offsets[index]), 4);
            if(!next_address) {
                status = STATUS_FWP_NULL_POINTER;
                goto exit;
            }

            current_address = next_address;
        }
    }
    __except(EXCEPTION_EXECUTE_HANDLER) {
        DebugMessageNormal("Failed to dereference address %#010x with offset %#04x (nr.: %i)\n", current_address, offsets[index], index);
        status = STATUS_INVALID_HANDLE;
        goto exit;
    }

exit:
    *result = current_address;
    return STATUS_SUCCESS;
}

// IOCTL Call Handler function
static ULONG kKernelTag = 'MHKD';
NTSTATUS IoControl(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
	NTSTATUS Status;
	ULONG BytesIO = 0;

	PIO_STACK_LOCATION stack = IoGetCurrentIrpStackLocation(Irp);

	// Code received from user space
	ULONG ControlCode = stack->Parameters.DeviceIoControl.IoControlCode;
	if (ControlCode == IO_READ_REQUEST)
	{
		// Get the input buffer & format it to our struct
		PKERNEL_READ_REQUEST request = (PKERNEL_READ_REQUEST)Irp->AssociatedIrp.SystemBuffer;

		PEPROCESS process;
        BytesIO = sizeof(KERNEL_READ_REQUEST);
        if(!NT_SUCCESS(PsLookupProcessByProcessId(request->process_id, &process))) {
            Status = STATUS_INVALID_HANDLE;
            goto finish_request;
        }

        uint32_t target_address;
        if(request->offset_count > 1) {
#define MAX_OFFSET_COUNT (32)

            if(request->offset_count >= MAX_OFFSET_COUNT) {
                DebugMessageNormal("Tried to dereference too many offsets (requested: %#02x, limit: %#02x)", request->offset_count, MAX_OFFSET_COUNT);
                Status = STATUS_INVALID_PARAMETER;
                goto finish_request;
            }
            uint32_t offset_buffer[MAX_OFFSET_COUNT];
            RtlCopyMemory(offset_buffer, request->offset_buffer, request->offset_count * sizeof(uint32_t));

            KAPC_STATE ApcState;
            KeStackAttachProcess(process, &ApcState);
            NTSTATUS deref_status = DereferenceAddress(request->address, offset_buffer, request->offset_count - 1, &target_address);
            KeUnstackDetachProcess(&ApcState);
            if(!NT_SUCCESS(deref_status)) {
                Status = STATUS_INVALID_HANDLE;
                goto finish_request;
            }

            /* Add the final offset for the actually reading */
            target_address += offset_buffer[request->offset_count - 1];
        } else if(request->offset_count == 1) {
            target_address = request->address + *(uint32_t*) request->offset_buffer;
        } else {
            target_address = request->address;
        }

        size_t bytes_read;
        Status = MmCopyVirtualMemory(
            process, (PVOID) target_address,
            PsGetCurrentProcess(), request->target_buffer,
            request->byte_count, KernelMode, &bytes_read
        );

        if(bytes_read < request->byte_count) {
            DebugMessageNormal("Failed to read %#02x bytes at address %#010x (req: %#010x, offsets: %i). Only %#02x bytes read.\n", request->byte_count, target_address, request->address, request->offset_count, bytes_read);
            Status = STATUS_END_OF_FILE;
            goto finish_request;
        }

		Status = STATUS_SUCCESS;
		BytesIO = sizeof(KERNEL_READ_REQUEST);
	}
	else if (ControlCode == IO_FIND_ENTITIES_REQUEST) {
		PKERNEL_FIND_ENTITIES_REQUEST request = (PKERNEL_FIND_ENTITIES_REQUEST) Irp->AssociatedIrp.SystemBuffer;
		PEPROCESS process;

        BytesIO = sizeof(KERNEL_FIND_ENTITIES_REQUEST);
		if(!NT_SUCCESS(PsLookupProcessByProcessId(request->process_id, &process))) {
			Status = STATUS_INVALID_HANDLE;
			goto finish_request;
		}

        uint8_t* entity_table = ExAllocatePoolWithTag(NonPagedPool, 0x10 * request->entity_table_size, kKernelTag);

        KAPC_STATE ApcState;
        KeStackAttachProcess(process, &ApcState);
        __try {
            ProbeForRead((PVOID) request->entity_table_address, 0x10 * request->entity_table_size, 1);
            RtlCopyMemory(entity_table, (PVOID) request->entity_table_address, 0x10 * request->entity_table_size);
        }
        __except(EXCEPTION_EXECUTE_HANDLER) {
            KeUnstackDetachProcess(&ApcState);
            ExFreePoolWithTag(entity_table, kKernelTag);

            DebugMessageNormal("Invalid given entity table address: %#010x \n", request->entity_table_address);
            Status = STATUS_INVALID_HANDLE;
            goto finish_request;
        }

        uint32_t* class_id_buffer = ExAllocatePoolWithTag(NonPagedPool, sizeof(uint32_t) * request->entity_table_size, kKernelTag);
        memset(class_id_buffer, 0, sizeof(uint32_t) * request->entity_table_size);
        for(size_t index = 0; index < request->entity_table_size; index++) {
            uint32_t entity_address = *(uint32_t*) (entity_table + index * 0x10);
            if(!entity_address) {
                continue;
            }

            uint32_t offsets[4] = {
                    0x08, // IClientNetworkable vtable
                    2 * 0x04, // GetClientClass
                    0x01, // MOV EAX <ClientClass ptr>
                    0x14, // int class_id
            };

            if(!NT_SUCCESS(DereferenceAddress(entity_address, offsets, 4, &class_id_buffer[index]))) {
                class_id_buffer[index] = 0;
                continue;
            }

            /* entity class id successfully read */
            //DebugMessageNormal("Entity address: %#04x -> %#010x -> %i \n", index, entity_address, class_id_buffer[index]);
        }
        KeUnstackDetachProcess(&ApcState);
        ExFreePoolWithTag(entity_table, kKernelTag);

        RtlCopyMemory(request->class_id_buffer, class_id_buffer, sizeof(uint32_t) * request->entity_table_size);
        ExFreePoolWithTag(class_id_buffer, kKernelTag);
        Status = STATUS_SUCCESS;
	}
	else if (ControlCode == IO_WRITE_REQUEST)
	{
		// Get the input buffer & format it to our struct
		PKERNEL_WRITE_REQUEST WriteInput = (PKERNEL_WRITE_REQUEST)Irp->AssociatedIrp.SystemBuffer;

		PEPROCESS Process;
		// Get our process
		if (NT_SUCCESS(PsLookupProcessByProcessId(WriteInput->ProcessId, &Process))) {
			// copy the value of target_buffer to WriteInput->address
			KeWriteVirtualMemory(Process, WriteInput->pBuff, WriteInput->Address, WriteInput->Size);
		}

		//DebugMessageNormal("Write Params:  %lu, %#010x \n", WriteInput->Value, WriteInput->address);

		Status = STATUS_SUCCESS;
		BytesIO = sizeof(KERNEL_WRITE_REQUEST);
	}
	else if (ControlCode == IO_GET_ID_REQUEST)
	{
		PULONG OutPut = (PULONG)Irp->AssociatedIrp.SystemBuffer;

		if (!CsgoID && (IsManualMapped || 1))
		{
			vector processes;
			vector_init(&processes);
			FindProcessByName("csgo.exe", &processes);

			// Did we find csgo?
            DebugMessageNormal("Try finding CSGO -> %#010x \n", vector_total(&processes));
			if (vector_total(&processes) > 0)
			{
				// First should be good.
				PEPROCESS proc = (PEPROCESS) vector_get(&processes, 0);
				CsgoID = (ULONG) PsGetProcessId(proc);
				
				MODULEENTRY ClientEntry = GetProcessModule(proc, L"client.dll");
				MODULEENTRY EngineEntry = GetProcessModule(proc, L"engine.dll");

				ClientAddress = ClientEntry.Address;
				EngineAddress = EngineEntry.Address;
				ClientSize = ClientEntry.Size;
				EngineSize = EngineEntry.Size;
			}
			vector_free(&processes);
		}
		
		*OutPut = CsgoID;

		DebugMessageNormal("A UserMode Application requested the ProcessID: %#010x \n", CsgoID);
		Status = STATUS_SUCCESS;
		BytesIO = sizeof(*OutPut);
	}
	else if (ControlCode == IO_GET_MODULE_REQUEST)
	{
		PULONG OutPut = (PULONG)Irp->AssociatedIrp.SystemBuffer;
		*OutPut = ClientAddress;

		DebugMessageNormal("A UserMode Application requested the ClientAddress: %#010x \n", ClientAddress);
		Status = STATUS_SUCCESS;
		BytesIO = sizeof(*OutPut);
	}
	else if (ControlCode == IO_GET_ENGINE_MODULE_REQUEST)
	{
		PULONG OutPut = (PULONG)Irp->AssociatedIrp.SystemBuffer;
		*OutPut = EngineAddress;

		DebugMessageNormal("A UserMode Application requested the EngineAddress: %#010x \n", EngineAddress);
		Status = STATUS_SUCCESS;
		BytesIO = sizeof(*OutPut);
	}
	else if (ControlCode == IO_GET_MODULE_REQUEST_LENGTH)
	{
		PULONG OutPut = (PULONG)Irp->AssociatedIrp.SystemBuffer;
		*OutPut = ClientSize;

		DebugMessageNormal("A UserMode Application requested the size of Client: %#010x \n", ClientSize);
		Status = STATUS_SUCCESS;
		BytesIO = sizeof(*OutPut);
	}
	else if (ControlCode == IO_GET_ENGINE_MODULE_REQUEST_LENGTH)
	{
		PULONG OutPut = (PULONG)Irp->AssociatedIrp.SystemBuffer;
		*OutPut = EngineSize;

		DebugMessageNormal("A UserMode Application requested the size of Engine: %#010x \n", EngineSize);
		Status = STATUS_SUCCESS;
		BytesIO = sizeof(*OutPut);
	}
	else if (ControlCode == IO_PROTECT_CONTROLLER)
	{
		ProtectController = 1;
		DebugMessageNormal("IO_PROTECT_CONTROLLER received. Controller is marked ready, and fully protected. \n");
		Status = STATUS_SUCCESS;
	}
	else if (ControlCode == IO_PROTECT_RANKREADER)
	{
		ProtectRankReader = 1;
		DebugMessageNormal("IO_PROTECT_RANKREADER received. RankReader is marked ready, and fully protected. \n");
		Status = STATUS_SUCCESS;
	}
	else
	{
		// if the code is unknown
		Status = STATUS_INVALID_PARAMETER;
	}

	// Complete the request
	finish_request:
	Irp->IoStatus.Status = Status;
	Irp->IoStatus.Information = BytesIO;
	IoCompleteRequest(Irp, IO_NO_INCREMENT);

	return Status;
}