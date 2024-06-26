typedef struct _CMSI_RW_LOCK
{
  /* 0x0000 */ void* Reserved;
} CMSI_RW_LOCK, *PCMSI_RW_LOCK; /* size: 0x0008 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0008 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0008 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef struct _HVP_VIEW_MAP
{
  /* 0x0000 */ void* SectionReference;
  /* 0x0008 */ __int64 StorageEndFileOffset;
  /* 0x0010 */ __int64 SectionEndFileOffset;
  /* 0x0018 */ struct _CMSI_PROCESS_TUPLE* ProcessTuple;
  /* 0x0020 */ unsigned long Flags;
  /* 0x0028 */ struct _RTL_RB_TREE ViewTree;
} HVP_VIEW_MAP, *PHVP_VIEW_MAP; /* size: 0x0038 */

typedef struct _FREE_DISPLAY
{
  /* 0x0000 */ unsigned long RealVectorSize;
  /* 0x0004 */ unsigned long Hint;
  /* 0x0008 */ struct _RTL_BITMAP Display;
} FREE_DISPLAY, *PFREE_DISPLAY; /* size: 0x0018 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _DUAL
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0008 */ struct _HMAP_DIRECTORY* Map;
  /* 0x0010 */ struct _HMAP_TABLE* SmallDir;
  /* 0x0018 */ unsigned long Guard;
  /* 0x0020 */ struct _FREE_DISPLAY FreeDisplay[24];
  /* 0x0260 */ struct _LIST_ENTRY FreeBins;
  /* 0x0270 */ unsigned long FreeSummary;
  /* 0x0274 */ long __PADDING__[1];
} DUAL, *PDUAL; /* size: 0x0278 */

typedef struct _HHIVE
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0008 */ void* GetCellRoutine /* function */;
  /* 0x0010 */ void* ReleaseCellRoutine /* function */;
  /* 0x0018 */ void* Allocate /* function */;
  /* 0x0020 */ void* Free /* function */;
  /* 0x0028 */ void* FileWrite /* function */;
  /* 0x0030 */ void* FileRead /* function */;
  /* 0x0038 */ void* HiveLoadFailure;
  /* 0x0040 */ struct _HBASE_BLOCK* BaseBlock;
  /* 0x0048 */ struct _CMSI_RW_LOCK FlusherLock;
  /* 0x0050 */ struct _CMSI_RW_LOCK WriterLock;
  /* 0x0058 */ struct _RTL_BITMAP DirtyVector;
  /* 0x0068 */ unsigned long DirtyCount;
  /* 0x006c */ unsigned long DirtyAlloc;
  /* 0x0070 */ struct _RTL_BITMAP UnreconciledVector;
  /* 0x0080 */ unsigned long UnreconciledCount;
  /* 0x0084 */ unsigned long BaseBlockAlloc;
  /* 0x0088 */ unsigned long Cluster;
  struct /* bitfield */
  {
    /* 0x008c */ unsigned char Flat : 1; /* bit position: 0 */
    /* 0x008c */ unsigned char ReadOnly : 1; /* bit position: 1 */
    /* 0x008c */ unsigned char Reserved : 6; /* bit position: 2 */
  }; /* bitfield */
  /* 0x008d */ unsigned char DirtyFlag;
  /* 0x0090 */ unsigned long HvBinHeadersUse;
  /* 0x0094 */ unsigned long HvFreeCellsUse;
  /* 0x0098 */ unsigned long HvUsedCellsUse;
  /* 0x009c */ unsigned long CmUsedCellsUse;
  /* 0x00a0 */ unsigned long HiveFlags;
  /* 0x00a4 */ unsigned long FlusherFlags;
  /* 0x00a8 */ unsigned long CurrentLog;
  /* 0x00ac */ unsigned long CurrentLogSequence;
  /* 0x00b0 */ unsigned long CurrentLogMinimumSequence;
  /* 0x00b4 */ unsigned long CurrentLogOffset;
  /* 0x00b8 */ unsigned long MinimumLogSequence;
  /* 0x00bc */ unsigned long LogFileSizeCap;
  /* 0x00c0 */ unsigned char LogDataPresent[2];
  /* 0x00c2 */ unsigned char PrimaryFileValid;
  /* 0x00c3 */ unsigned char BaseBlockDirty;
  /* 0x00c8 */ union _LARGE_INTEGER LastLogSwapTime;
  union
  {
    struct /* bitfield */
    {
      /* 0x00d0 */ unsigned short FirstLogFile : 3; /* bit position: 0 */
      /* 0x00d0 */ unsigned short SecondLogFile : 3; /* bit position: 3 */
      /* 0x00d0 */ unsigned short HeaderRecovered : 1; /* bit position: 6 */
      /* 0x00d0 */ unsigned short LegacyRecoveryIndicated : 1; /* bit position: 7 */
      /* 0x00d0 */ unsigned short RecoveryInformationReserved : 8; /* bit position: 8 */
    }; /* bitfield */
    /* 0x00d0 */ unsigned short RecoveryInformation;
  }; /* size: 0x0002 */
  /* 0x00d2 */ unsigned char LogEntriesRecovered[2];
  /* 0x00d4 */ unsigned long RefreshCount;
  /* 0x00d8 */ unsigned long StorageTypeCount;
  /* 0x00dc */ unsigned long Version;
  /* 0x00e0 */ struct _HVP_VIEW_MAP ViewMap;
  /* 0x0118 */ struct _DUAL Storage[2];
} HHIVE, *PHHIVE; /* size: 0x0608 */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned __int64 Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0008 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef enum _CM_DIRTY_VECTOR_OPERATION
{
  DirtyVectorModified = 0,
  DirtyDataCaptureStart = 1,
  DirtyDataCaptureEnd = 2,
} CM_DIRTY_VECTOR_OPERATION, *PCM_DIRTY_VECTOR_OPERATION;

typedef struct _CM_DIRTY_VECTOR_LOG_ENTRY
{
  /* 0x0000 */ struct _ETHREAD* Thread;
  /* 0x0008 */ enum _CM_DIRTY_VECTOR_OPERATION Operation;
  union
  {
    union
    {
      struct
      {
        /* 0x000c */ unsigned long Start;
        /* 0x0010 */ unsigned long Length;
      } /* size: 0x0008 */ DirtyVectorModifiedContext;
      struct
      {
        /* 0x000c */ unsigned long RangeCount;
        /* 0x0010 */ unsigned long SetBitCount;
      } /* size: 0x0008 */ DirtyDataCaptureContext;
      struct
      {
        /* 0x000c */ unsigned long Context1;
        /* 0x0010 */ unsigned long Context2;
      } /* size: 0x0008 */ Raw;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ Data;
  /* 0x0018 */ void* Stack[6];
} CM_DIRTY_VECTOR_LOG_ENTRY, *PCM_DIRTY_VECTOR_LOG_ENTRY; /* size: 0x0048 */

typedef struct _CM_DIRTY_VECTOR_LOG
{
  /* 0x0000 */ volatile unsigned long Next;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ struct _CM_DIRTY_VECTOR_LOG_ENTRY Log[16];
} CM_DIRTY_VECTOR_LOG, *PCM_DIRTY_VECTOR_LOG; /* size: 0x0488 */

typedef struct _HIVE_WRITE_WAIT_QUEUE
{
  /* 0x0000 */ struct _ETHREAD* ActiveThread;
  /* 0x0008 */ struct _HIVE_WAIT_PACKET* WaitList;
} HIVE_WRITE_WAIT_QUEUE, *PHIVE_WRITE_WAIT_QUEUE; /* size: 0x0010 */

typedef struct _CMHIVE
{
  /* 0x0000 */ struct _HHIVE Hive;
  /* 0x0608 */ void* FileHandles[6];
  /* 0x0638 */ struct _LIST_ENTRY NotifyList;
  /* 0x0648 */ struct _LIST_ENTRY HiveList;
  /* 0x0658 */ struct _LIST_ENTRY PreloadedHiveList;
  /* 0x0668 */ struct _EX_RUNDOWN_REF HiveRundown;
  /* 0x0670 */ struct _CM_KEY_HASH_TABLE_ENTRY* KcbCacheTable;
  /* 0x0678 */ unsigned long KcbCacheTableSize;
  /* 0x0680 */ struct _CM_KEY_HASH_TABLE_ENTRY* DeletedKcbTable;
  /* 0x0688 */ unsigned long DeletedKcbTableSize;
  /* 0x068c */ unsigned long Identity;
  /* 0x0690 */ struct _CMSI_RW_LOCK HiveLock;
  /* 0x0698 */ struct _RTL_BITMAP FlushDirtyVector;
  /* 0x06a8 */ unsigned long FlushDirtyVectorSize;
  /* 0x06b0 */ struct CMP_OFFSET_ARRAY* FlushLogEntryOffsetArray;
  /* 0x06b8 */ unsigned long FlushLogEntryOffsetArrayCount;
  /* 0x06bc */ unsigned long FlushLogEntrySize;
  /* 0x06c0 */ unsigned long FlushHiveTruncated;
  /* 0x06c4 */ unsigned char FlushBaseBlockDirty;
  /* 0x06c8 */ struct _RTL_BITMAP CapturedUnreconciledVector;
  /* 0x06d8 */ unsigned long CapturedUnreconciledVectorSize;
  /* 0x06e0 */ struct CMP_OFFSET_ARRAY* UnreconciledOffsetArray;
  /* 0x06e8 */ unsigned long UnreconciledOffsetArrayCount;
  /* 0x06f0 */ struct _HBASE_BLOCK* UnreconciledBaseBlock;
  /* 0x06f8 */ struct _EX_PUSH_LOCK SecurityLock;
  /* 0x0700 */ unsigned long LastShrinkHiveSize;
  /* 0x0708 */ union _LARGE_INTEGER ActualFileSize;
  /* 0x0710 */ union _LARGE_INTEGER LogFileSizes[2];
  /* 0x0720 */ struct _UNICODE_STRING FileFullPath;
  /* 0x0730 */ struct _UNICODE_STRING FileUserName;
  /* 0x0740 */ struct _UNICODE_STRING HiveRootPath;
  /* 0x0750 */ unsigned long SecurityCount;
  /* 0x0754 */ unsigned long SecurityCacheSize;
  /* 0x0758 */ long SecurityHitHint;
  /* 0x0760 */ struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;
  /* 0x0768 */ struct _LIST_ENTRY SecurityHash[64];
  /* 0x0b68 */ unsigned long UnloadEventCount;
  /* 0x0b70 */ struct _KEVENT** UnloadEventArray;
  /* 0x0b78 */ struct _CM_KEY_CONTROL_BLOCK* RootKcb;
  /* 0x0b80 */ unsigned char Frozen;
  /* 0x0b88 */ struct _CM_DIRTY_VECTOR_LOG DirtyVectorLog;
  /* 0x1010 */ unsigned long Flags;
  /* 0x1018 */ struct _LIST_ENTRY TrustClassEntry;
  /* 0x1028 */ unsigned __int64 DirtyTime;
  /* 0x1030 */ unsigned __int64 UnreconciledTime;
  /* 0x1038 */ struct _CM_RM* CmRm;
  /* 0x1040 */ unsigned long CmRmInitFailPoint;
  /* 0x1044 */ long CmRmInitFailStatus;
  /* 0x1048 */ struct _KTHREAD* CreatorOwner;
  /* 0x1050 */ struct _KTHREAD* RundownThread;
  /* 0x1058 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x1060 */ struct _HIVE_WRITE_WAIT_QUEUE FlushQueue;
  /* 0x1070 */ struct _HIVE_WRITE_WAIT_QUEUE ReconcileQueue;
  union
  {
    /* 0x1080 */ unsigned long FlushFlags;
    struct /* bitfield */
    {
      /* 0x1080 */ unsigned long PrimaryFilePurged : 1; /* bit position: 0 */
      /* 0x1080 */ unsigned long DiskFileBad : 1; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x1084 */ unsigned long PrimaryFileSizeBeforeLastFlush;
  /* 0x1088 */ volatile long ReferenceCount;
  /* 0x108c */ long UnloadHistoryIndex;
  /* 0x1090 */ unsigned long UnloadHistory[128];
  /* 0x1290 */ unsigned long BootStart;
  /* 0x1294 */ unsigned long UnaccessedStart;
  /* 0x1298 */ unsigned long UnaccessedEnd;
  /* 0x129c */ unsigned long LoadedKeyCount;
  /* 0x12a0 */ volatile unsigned long HandleClosePending;
  /* 0x12a8 */ struct _EX_PUSH_LOCK HandleClosePendingEvent;
  /* 0x12b0 */ unsigned char FinalFlushSucceeded;
  /* 0x12b8 */ struct _CMP_VOLUME_CONTEXT* VolumeContext;
  /* 0x12c0 */ unsigned long LateUnloadWorkItemState;
  /* 0x12c8 */ struct _EX_PUSH_LOCK LateUnloadFinishedEvent;
  /* 0x12d0 */ struct _WORK_QUEUE_ITEM* LateUnloadWorkItem;
} CMHIVE, *PCMHIVE; /* size: 0x12d8 */

