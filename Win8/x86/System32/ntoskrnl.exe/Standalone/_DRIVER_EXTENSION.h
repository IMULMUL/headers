typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _DRIVER_EXTENSION
{
  /* 0x0000 */ struct _DRIVER_OBJECT* DriverObject;
  /* 0x0004 */ void* AddDevice /* function */;
  /* 0x0008 */ unsigned long Count;
  /* 0x000c */ struct _UNICODE_STRING ServiceKeyName;
  /* 0x0014 */ struct _IO_CLIENT_EXTENSION* ClientDriverExtension;
  /* 0x0018 */ struct _FS_FILTER_CALLBACKS* FsFilterCallbacks;
  /* 0x001c */ void* KseCallbacks;
  /* 0x0020 */ void* DvCallbacks;
} DRIVER_EXTENSION, *PDRIVER_EXTENSION; /* size: 0x0024 */

