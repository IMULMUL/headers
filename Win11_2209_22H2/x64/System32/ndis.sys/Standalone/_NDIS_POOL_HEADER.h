typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

class KSpinLock
{
}; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _NDIS_POOL_HEADER
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long PoolFlags;
  /* 0x0008 */ class KSpinLock ListLock;
  /* 0x0010 */ struct _LIST_ENTRY AllocatedList;
  /* 0x0020 */ unsigned long ItemLength;
  /* 0x0024 */ unsigned long Tag;
} NDIS_POOL_HEADER, *PNDIS_POOL_HEADER; /* size: 0x0028 */

