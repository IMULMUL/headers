typedef struct _WNF_STATE_NAME
{
  /* 0x0000 */ unsigned long Data[2];
} WNF_STATE_NAME, *PWNF_STATE_NAME; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _WNF_TYPE_ID
{
  /* 0x0000 */ struct _GUID TypeId;
} WNF_TYPE_ID, *PWNF_TYPE_ID; /* size: 0x0010 */

typedef struct _WNF_DELIVERY_DESCRIPTOR
{
  /* 0x0000 */ struct _WNF_STATE_NAME StateName;
  /* 0x0008 */ unsigned long ChangeStamp;
  /* 0x000c */ unsigned long DeliveryFlag;
  /* 0x0010 */ unsigned long DeliveryState;
  /* 0x0014 */ unsigned long ReliableRetryDelay;
  /* 0x0018 */ unsigned long BatchRetry;
  /* 0x001c */ unsigned long StateDataSize;
  /* 0x0020 */ unsigned long EventMask;
  /* 0x0024 */ struct _WNF_TYPE_ID TypeId;
  /* 0x0034 */ unsigned long StateDataOffset;
} WNF_DELIVERY_DESCRIPTOR, *PWNF_DELIVERY_DESCRIPTOR; /* size: 0x0038 */

