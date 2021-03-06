typedef struct _MI_FREE_LARGE_PAGES
{
  /* 0x0000 */ unsigned long LargePageFreeCount[2];
  /* 0x0008 */ unsigned long LargePageFreeCountHiLow[2][2];
  /* 0x0018 */ unsigned long LargePagesCount[4][1][2][2];
  /* 0x0058 */ struct _MI_FREE_LARGE_PAGE_LIST* LargePageEntries[4][1][2][2];
} MI_FREE_LARGE_PAGES, *PMI_FREE_LARGE_PAGES; /* size: 0x0098 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0008 */ void* WorkerRoutine /* function */;
  /* 0x000c */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0010 */

typedef struct _MI_REBUILD_LARGE_PAGE_TIMER
{
  /* 0x0000 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0010 */ unsigned char SecondsLeft;
  /* 0x0011 */ unsigned char RebuildActive;
  /* 0x0012 */ unsigned char NextPassDelta;
  /* 0x0013 */ unsigned char LargeSubPagesActive;
} MI_REBUILD_LARGE_PAGE_TIMER, *PMI_REBUILD_LARGE_PAGE_TIMER; /* size: 0x0014 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _MI_PAGE_COLORS
{
  /* 0x0000 */ unsigned long PageSize[3];
} MI_PAGE_COLORS, *PMI_PAGE_COLORS; /* size: 0x000c */

typedef enum _MI_WRITE_TYPES
{
  WriteTypeCached = 0,
  WriteTypeNonTemporal = 1,
  WriteTypeMaximum = 2,
} MI_WRITE_TYPES, *PMI_WRITE_TYPES;

typedef struct _MI_WRITE_CALIBRATION
{
  /* 0x0000 */ unsigned long MaximumNumberProcessors;
  /* 0x0004 */ enum _MI_WRITE_TYPES OptimalWriteType;
  /* 0x0008 */ unsigned long PerProcessorNumberOfBytes;
  /* 0x000c */ unsigned long OptimalWriteProcessors[2];
  /* 0x0014 */ struct _MI_WRITE_MODES* RawTimeStamps;
} MI_WRITE_CALIBRATION, *PMI_WRITE_CALIBRATION; /* size: 0x0018 */

typedef struct _GROUP_AFFINITY
{
  /* 0x0000 */ unsigned long Mask;
  /* 0x0004 */ unsigned short Group;
  /* 0x0006 */ unsigned short Reserved[3];
} GROUP_AFFINITY, *PGROUP_AFFINITY; /* size: 0x000c */

typedef struct _MI_NODE_INFORMATION
{
  /* 0x0000 */ struct _MI_FREE_LARGE_PAGES FreeLargePages[2];
  /* 0x0130 */ struct _MI_REBUILD_LARGE_PAGE_TIMER LargePageRebuildTimer;
  /* 0x0180 */ struct _RTL_BITMAP FreePageListHeadsBitmap[2];
  /* 0x0190 */ unsigned long FreePageListHeadsBitmapBuffer[16];
  /* 0x01d0 */ volatile unsigned long FreeCount[2];
  /* 0x01d8 */ unsigned long TotalPages[1];
  /* 0x01dc */ unsigned long TotalPagesEntireNode;
  /* 0x01e0 */ unsigned long MmShiftedColor;
  /* 0x01e4 */ unsigned long Color;
  /* 0x01e8 */ volatile unsigned long ChannelFreeCount[2][1];
  struct
  {
    struct /* bitfield */
    {
      /* 0x01f0 */ unsigned long ChannelsHotCold : 1; /* bit position: 0 */
      /* 0x01f0 */ unsigned long Spare : 31; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0004 */ Flags;
  /* 0x01f4 */ unsigned long LargeListMoveInProgress;
  /* 0x01f8 */ struct _MI_LARGE_PAGE_LISTS_CHANGING* LargeListWaiters;
  /* 0x01fc */ struct _EX_PUSH_LOCK NodeLock;
  /* 0x0200 */ unsigned char ChannelStatus;
  /* 0x0201 */ unsigned char ChannelOrdering[1];
  /* 0x0202 */ unsigned char LockedChannelOrdering[1];
  /* 0x0203 */ unsigned char PowerAttribute[1];
  /* 0x0204 */ unsigned long LargePageLock;
  /* 0x0208 */ struct _MI_PAGE_COLORS PageColorTable;
  /* 0x0214 */ unsigned long NumberOfPagesGoingBad;
  /* 0x0218 */ struct _MI_WRITE_CALIBRATION WriteCalibration;
  /* 0x0230 */ void* BootZeroContext;
  /* 0x0234 */ void* BootZeroPageTimesPerProcessor;
  /* 0x0238 */ void* ZeroingVaBase;
  /* 0x023c */ unsigned long TotalBytesToZero;
  /* 0x0240 */ unsigned long PerProcessorNumberOfBytesToZero;
  /* 0x0244 */ void* ZeroingContext;
  /* 0x0248 */ volatile unsigned long ZeroingProcessorCount;
  /* 0x024c */ volatile long ZeroHand;
  /* 0x0250 */ volatile long FinishedProcessors;
  /* 0x0258 */ unsigned __int64 CyclesToZeroOneLargePage;
  /* 0x0260 */ unsigned __int64* ScaledCyclesToZeroOneLargePage;
  /* 0x0264 */ struct _GROUP_AFFINITY GroupAffinity;
  /* 0x0270 */ unsigned short ProcessorCount;
  /* 0x0272 */ unsigned char BackgroundZeroingActive;
  /* 0x0274 */ struct _PHYSICAL_MEMORY_DESCRIPTOR* ZeroingPhysicalMemoryBlock;
  /* 0x0278 */ long __PADDING__[2];
} MI_NODE_INFORMATION, *PMI_NODE_INFORMATION; /* size: 0x0280 */

