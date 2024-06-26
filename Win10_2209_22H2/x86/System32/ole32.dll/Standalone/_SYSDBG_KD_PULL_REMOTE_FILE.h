typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _SYSDBG_KD_PULL_REMOTE_FILE
{
  /* 0x0000 */ struct _UNICODE_STRING ImageFileName;
} SYSDBG_KD_PULL_REMOTE_FILE, *PSYSDBG_KD_PULL_REMOTE_FILE; /* size: 0x0008 */

