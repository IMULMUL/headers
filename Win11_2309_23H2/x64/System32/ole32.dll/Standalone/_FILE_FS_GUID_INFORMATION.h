typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _FILE_FS_GUID_INFORMATION
{
  /* 0x0000 */ struct _GUID FsGuid;
} FILE_FS_GUID_INFORMATION, *PFILE_FS_GUID_INFORMATION; /* size: 0x0010 */

