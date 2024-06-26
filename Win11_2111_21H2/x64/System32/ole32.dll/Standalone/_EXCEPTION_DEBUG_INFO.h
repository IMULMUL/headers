typedef struct _EXCEPTION_RECORD
{
  /* 0x0000 */ long ExceptionCode;
  /* 0x0004 */ unsigned long ExceptionFlags;
  /* 0x0008 */ struct _EXCEPTION_RECORD* ExceptionRecord;
  /* 0x0010 */ void* ExceptionAddress;
  /* 0x0018 */ unsigned long NumberParameters;
  /* 0x0020 */ unsigned __int64 ExceptionInformation[15];
} EXCEPTION_RECORD, *PEXCEPTION_RECORD; /* size: 0x0098 */

typedef struct _EXCEPTION_DEBUG_INFO
{
  /* 0x0000 */ struct _EXCEPTION_RECORD ExceptionRecord;
  /* 0x0098 */ unsigned long dwFirstChance;
  /* 0x009c */ long __PADDING__[1];
} EXCEPTION_DEBUG_INFO, *PEXCEPTION_DEBUG_INFO; /* size: 0x00a0 */

