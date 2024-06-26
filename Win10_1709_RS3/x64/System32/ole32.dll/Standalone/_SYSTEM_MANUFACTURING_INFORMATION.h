typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _SYSTEM_MANUFACTURING_INFORMATION
{
  /* 0x0000 */ unsigned long Options;
  /* 0x0008 */ struct _UNICODE_STRING ProfileName;
} SYSTEM_MANUFACTURING_INFORMATION, *PSYSTEM_MANUFACTURING_INFORMATION; /* size: 0x0018 */

