typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _wireSAFEARR_HAVEIID
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0008 */ struct IUnknown** apUnknown;
  /* 0x0010 */ struct _GUID iid;
} wireSAFEARR_HAVEIID, *PwireSAFEARR_HAVEIID; /* size: 0x0020 */

