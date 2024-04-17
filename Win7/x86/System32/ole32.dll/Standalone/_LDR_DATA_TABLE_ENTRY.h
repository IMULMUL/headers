typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

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

typedef struct _LDR_DATA_TABLE_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY InLoadOrderLinks;
  /* 0x0008 */ struct _LIST_ENTRY InMemoryOrderLinks;
  /* 0x0010 */ struct _LIST_ENTRY InInitializationOrderLinks;
  /* 0x0018 */ void* DllBase;
  /* 0x001c */ void* EntryPoint;
  /* 0x0020 */ unsigned long SizeOfImage;
  /* 0x0024 */ struct _UNICODE_STRING FullDllName;
  /* 0x002c */ struct _UNICODE_STRING BaseDllName;
  /* 0x0034 */ unsigned long Flags;
  /* 0x0038 */ unsigned short LoadCount;
  /* 0x003a */ unsigned short TlsIndex;
  union
  {
    /* 0x003c */ struct _LIST_ENTRY HashLinks;
    struct
    {
      /* 0x003c */ void* SectionPointer;
      /* 0x0040 */ unsigned long CheckSum;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0044 */ unsigned long TimeDateStamp;
    /* 0x0044 */ void* LoadedImports;
  }; /* size: 0x0004 */
  /* 0x0048 */ struct _ACTIVATION_CONTEXT* EntryPointActivationContext;
  /* 0x004c */ void* PatchInformation;
  /* 0x0050 */ struct _LIST_ENTRY ForwarderLinks;
  /* 0x0058 */ struct _LIST_ENTRY ServiceTagLinks;
  /* 0x0060 */ struct _LIST_ENTRY StaticLinks;
  /* 0x0068 */ void* ContextInformation;
  /* 0x006c */ unsigned long OriginalBase;
  /* 0x0070 */ union _LARGE_INTEGER LoadTime;
} LDR_DATA_TABLE_ENTRY, *PLDR_DATA_TABLE_ENTRY; /* size: 0x0078 */

