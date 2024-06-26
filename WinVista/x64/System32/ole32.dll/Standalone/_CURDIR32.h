typedef struct _STRING32
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned long Buffer;
} STRING32, *PSTRING32; /* size: 0x0008 */

typedef struct _CURDIR32
{
  /* 0x0000 */ struct _STRING32 DosPath;
  /* 0x0008 */ unsigned long Handle;
} CURDIR32, *PCURDIR32; /* size: 0x000c */

