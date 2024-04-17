typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

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

typedef enum _FUNCTION_TABLE_TYPE
{
  RF_SORTED = 0,
  RF_UNSORTED = 1,
  RF_CALLBACK = 2,
} FUNCTION_TABLE_TYPE, *PFUNCTION_TABLE_TYPE;

typedef struct _DYNAMIC_FUNCTION_TABLE
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ struct _RUNTIME_FUNCTION* FunctionTable;
  /* 0x0018 */ union _LARGE_INTEGER TimeStamp;
  /* 0x0020 */ unsigned __int64 MinimumAddress;
  /* 0x0028 */ unsigned __int64 MaximumAddress;
  /* 0x0030 */ unsigned __int64 BaseAddress;
  /* 0x0038 */ void* Callback /* function */;
  /* 0x0040 */ void* Context;
  /* 0x0048 */ wchar_t* OutOfProcessCallbackDll;
  /* 0x0050 */ enum _FUNCTION_TABLE_TYPE Type;
  /* 0x0054 */ unsigned long EntryCount;
} DYNAMIC_FUNCTION_TABLE, *PDYNAMIC_FUNCTION_TABLE; /* size: 0x0058 */

