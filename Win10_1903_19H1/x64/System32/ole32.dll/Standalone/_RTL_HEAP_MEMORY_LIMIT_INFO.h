typedef struct _RTL_HEAP_MEMORY_LIMIT_DATA
{
  /* 0x0000 */ unsigned __int64 CommitLimitBytes;
  /* 0x0008 */ unsigned __int64 CommitLimitFailureCode;
  /* 0x0010 */ unsigned __int64 MaxAllocationSizeBytes;
  /* 0x0018 */ unsigned __int64 AllocationLimitFailureCode;
} RTL_HEAP_MEMORY_LIMIT_DATA, *PRTL_HEAP_MEMORY_LIMIT_DATA; /* size: 0x0020 */

typedef struct _RTL_HEAP_MEMORY_LIMIT_INFO
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0008 */ struct _RTL_HEAP_MEMORY_LIMIT_DATA Data;
} RTL_HEAP_MEMORY_LIMIT_INFO, *PRTL_HEAP_MEMORY_LIMIT_INFO; /* size: 0x0028 */

