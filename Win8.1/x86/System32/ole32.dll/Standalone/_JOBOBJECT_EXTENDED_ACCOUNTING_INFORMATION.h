typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _JOBOBJECT_BASIC_ACCOUNTING_INFORMATION
{
  /* 0x0000 */ union _LARGE_INTEGER TotalUserTime;
  /* 0x0008 */ union _LARGE_INTEGER TotalKernelTime;
  /* 0x0010 */ union _LARGE_INTEGER ThisPeriodTotalUserTime;
  /* 0x0018 */ union _LARGE_INTEGER ThisPeriodTotalKernelTime;
  /* 0x0020 */ unsigned long TotalPageFaultCount;
  /* 0x0024 */ unsigned long TotalProcesses;
  /* 0x0028 */ unsigned long ActiveProcesses;
  /* 0x002c */ unsigned long TotalTerminatedProcesses;
} JOBOBJECT_BASIC_ACCOUNTING_INFORMATION, *PJOBOBJECT_BASIC_ACCOUNTING_INFORMATION; /* size: 0x0030 */

typedef struct _IO_COUNTERS
{
  /* 0x0000 */ unsigned __int64 ReadOperationCount;
  /* 0x0008 */ unsigned __int64 WriteOperationCount;
  /* 0x0010 */ unsigned __int64 OtherOperationCount;
  /* 0x0018 */ unsigned __int64 ReadTransferCount;
  /* 0x0020 */ unsigned __int64 WriteTransferCount;
  /* 0x0028 */ unsigned __int64 OtherTransferCount;
} IO_COUNTERS, *PIO_COUNTERS; /* size: 0x0030 */

typedef struct _PROCESS_DISK_COUNTERS
{
  /* 0x0000 */ unsigned __int64 BytesRead;
  /* 0x0008 */ unsigned __int64 BytesWritten;
  /* 0x0010 */ unsigned __int64 ReadOperationCount;
  /* 0x0018 */ unsigned __int64 WriteOperationCount;
  /* 0x0020 */ unsigned __int64 FlushOperationCount;
} PROCESS_DISK_COUNTERS, *PPROCESS_DISK_COUNTERS; /* size: 0x0028 */

typedef struct _JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION
{
  /* 0x0000 */ struct _JOBOBJECT_BASIC_ACCOUNTING_INFORMATION BasicInfo;
  /* 0x0030 */ struct _IO_COUNTERS IoInfo;
  /* 0x0060 */ struct _PROCESS_DISK_COUNTERS DiskIoInfo;
  /* 0x0088 */ unsigned __int64 ContextSwitches;
  /* 0x0090 */ union _LARGE_INTEGER TotalCycleTime;
  /* 0x0098 */ unsigned __int64 ReadyTime;
} JOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION, *PJOBOBJECT_EXTENDED_ACCOUNTING_INFORMATION; /* size: 0x00a0 */

