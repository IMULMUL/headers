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

typedef struct _STORAGE_READ_CAPACITY
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long BlockLength;
  /* 0x0010 */ union _LARGE_INTEGER NumberOfBlocks;
  /* 0x0018 */ union _LARGE_INTEGER DiskLength;
} STORAGE_READ_CAPACITY, *PSTORAGE_READ_CAPACITY; /* size: 0x0020 */

