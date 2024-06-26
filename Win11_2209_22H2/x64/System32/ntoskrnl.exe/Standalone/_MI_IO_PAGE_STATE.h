typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _MI_IO_CACHE_STATS
{
  /* 0x0000 */ unsigned long UnmappedCacheFlush;
  /* 0x0004 */ unsigned long UnmappedCacheConflict;
  /* 0x0008 */ unsigned long PermanentIoAttributeConflict;
  /* 0x000c */ unsigned long PermanentIoNodeConflict;
} MI_IO_CACHE_STATS, *PMI_IO_CACHE_STATS; /* size: 0x0010 */

typedef struct _MI_IO_PAGE_STATE
{
  /* 0x0000 */ struct _RTL_AVL_TREE IoPfnRoot[2];
  /* 0x0010 */ unsigned __int64 UnmappedNodeCount[2];
  /* 0x0020 */ volatile unsigned __int64 UnmappedHugeIoSpaceNodeCount;
  /* 0x0040 */ unsigned __int64 UnmappedNodeCountMaximum;
  /* 0x0048 */ unsigned __int64 TotalNodeCount[2];
  /* 0x0058 */ struct _RTL_AVL_TREE InvariantIoSpace;
  /* 0x0060 */ volatile long IoPfnPruneLock;
  /* 0x0068 */ unsigned __int64 ResumePageForDeleteScans[2];
  /* 0x0078 */ struct _WORK_QUEUE_ITEM UnmappedNodeWorkItem;
  /* 0x0098 */ struct _MI_IO_CACHE_STATS IoCacheStats;
  /* 0x00a8 */ long __PADDING__[6];
} MI_IO_PAGE_STATE, *PMI_IO_PAGE_STATE; /* size: 0x00c0 */

