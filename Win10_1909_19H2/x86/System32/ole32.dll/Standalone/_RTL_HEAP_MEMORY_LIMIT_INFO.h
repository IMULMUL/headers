typedef struct _RTL_HEAP_MEMORY_LIMIT_DATA
{
  /* 0x0000 */ unsigned long CommitLimitBytes;
  /* 0x0004 */ unsigned long CommitLimitFailureCode;
  /* 0x0008 */ unsigned long MaxAllocationSizeBytes;
  /* 0x000c */ unsigned long AllocationLimitFailureCode;
} RTL_HEAP_MEMORY_LIMIT_DATA, *PRTL_HEAP_MEMORY_LIMIT_DATA; /* size: 0x0010 */

typedef struct _RTL_HEAP_MEMORY_LIMIT_INFO
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ struct _RTL_HEAP_MEMORY_LIMIT_DATA Data;
} RTL_HEAP_MEMORY_LIMIT_INFO, *PRTL_HEAP_MEMORY_LIMIT_INFO; /* size: 0x0014 */

