typedef struct _NT_TIB
{
  /* 0x0000 */ struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList;
  /* 0x0008 */ void* StackBase;
  /* 0x0010 */ void* StackLimit;
  /* 0x0018 */ void* SubSystemTib;
  union
  {
    /* 0x0020 */ void* FiberData;
    /* 0x0020 */ unsigned long Version;
  }; /* size: 0x0008 */
  /* 0x0028 */ void* ArbitraryUserPointer;
  /* 0x0030 */ struct _NT_TIB* Self;
} NT_TIB, *PNT_TIB; /* size: 0x0038 */

typedef union _KPRCBFLAG
{
  union
  {
    /* 0x0000 */ volatile long PrcbFlags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long BamQosLevel : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned long PendingQosUpdate : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned long CacheIsolationEnabled : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned long TracepointActive : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned long LongDpcRunning : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned long PrcbFlagsReserved : 20; /* bit position: 12 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} KPRCBFLAG, *PKPRCBFLAG; /* size: 0x0004 */

typedef struct _KDESCRIPTOR
{
  /* 0x0000 */ unsigned short Pad[3];
  /* 0x0006 */ unsigned short Limit;
  /* 0x0008 */ void* Base;
} KDESCRIPTOR, *PKDESCRIPTOR; /* size: 0x0010 */

typedef struct _KSPECIAL_REGISTERS
{
  /* 0x0000 */ unsigned __int64 Cr0;
  /* 0x0008 */ unsigned __int64 Cr2;
  /* 0x0010 */ unsigned __int64 Cr3;
  /* 0x0018 */ unsigned __int64 Cr4;
  /* 0x0020 */ unsigned __int64 KernelDr0;
  /* 0x0028 */ unsigned __int64 KernelDr1;
  /* 0x0030 */ unsigned __int64 KernelDr2;
  /* 0x0038 */ unsigned __int64 KernelDr3;
  /* 0x0040 */ unsigned __int64 KernelDr6;
  /* 0x0048 */ unsigned __int64 KernelDr7;
  /* 0x0050 */ struct _KDESCRIPTOR Gdtr;
  /* 0x0060 */ struct _KDESCRIPTOR Idtr;
  /* 0x0070 */ unsigned short Tr;
  /* 0x0072 */ unsigned short Ldtr;
  /* 0x0074 */ unsigned long MxCsr;
  /* 0x0078 */ unsigned __int64 DebugControl;
  /* 0x0080 */ unsigned __int64 LastBranchToRip;
  /* 0x0088 */ unsigned __int64 LastBranchFromRip;
  /* 0x0090 */ unsigned __int64 LastExceptionToRip;
  /* 0x0098 */ unsigned __int64 LastExceptionFromRip;
  /* 0x00a0 */ unsigned __int64 Cr8;
  /* 0x00a8 */ unsigned __int64 MsrGsBase;
  /* 0x00b0 */ unsigned __int64 MsrGsSwap;
  /* 0x00b8 */ unsigned __int64 MsrStar;
  /* 0x00c0 */ unsigned __int64 MsrLStar;
  /* 0x00c8 */ unsigned __int64 MsrCStar;
  /* 0x00d0 */ unsigned __int64 MsrSyscallMask;
  /* 0x00d8 */ unsigned __int64 Xcr0;
  /* 0x00e0 */ unsigned __int64 MsrFsBase;
  /* 0x00e8 */ unsigned __int64 SpecialPadding0;
} KSPECIAL_REGISTERS, *PKSPECIAL_REGISTERS; /* size: 0x00f0 */

typedef struct _M128A
{
  /* 0x0000 */ unsigned __int64 Low;
  /* 0x0008 */ __int64 High;
} M128A, *PM128A; /* size: 0x0010 */

typedef struct _XSAVE_FORMAT
{
  /* 0x0000 */ unsigned short ControlWord;
  /* 0x0002 */ unsigned short StatusWord;
  /* 0x0004 */ unsigned char TagWord;
  /* 0x0005 */ unsigned char Reserved1;
  /* 0x0006 */ unsigned short ErrorOpcode;
  /* 0x0008 */ unsigned long ErrorOffset;
  /* 0x000c */ unsigned short ErrorSelector;
  /* 0x000e */ unsigned short Reserved2;
  /* 0x0010 */ unsigned long DataOffset;
  /* 0x0014 */ unsigned short DataSelector;
  /* 0x0016 */ unsigned short Reserved3;
  /* 0x0018 */ unsigned long MxCsr;
  /* 0x001c */ unsigned long MxCsr_Mask;
  /* 0x0020 */ struct _M128A FloatRegisters[8];
  /* 0x00a0 */ struct _M128A XmmRegisters[16];
  /* 0x01a0 */ unsigned char Reserved4[96];
} XSAVE_FORMAT, *PXSAVE_FORMAT; /* size: 0x0200 */

typedef struct _CONTEXT
{
  /* 0x0000 */ unsigned __int64 P1Home;
  /* 0x0008 */ unsigned __int64 P2Home;
  /* 0x0010 */ unsigned __int64 P3Home;
  /* 0x0018 */ unsigned __int64 P4Home;
  /* 0x0020 */ unsigned __int64 P5Home;
  /* 0x0028 */ unsigned __int64 P6Home;
  /* 0x0030 */ unsigned long ContextFlags;
  /* 0x0034 */ unsigned long MxCsr;
  /* 0x0038 */ unsigned short SegCs;
  /* 0x003a */ unsigned short SegDs;
  /* 0x003c */ unsigned short SegEs;
  /* 0x003e */ unsigned short SegFs;
  /* 0x0040 */ unsigned short SegGs;
  /* 0x0042 */ unsigned short SegSs;
  /* 0x0044 */ unsigned long EFlags;
  /* 0x0048 */ unsigned __int64 Dr0;
  /* 0x0050 */ unsigned __int64 Dr1;
  /* 0x0058 */ unsigned __int64 Dr2;
  /* 0x0060 */ unsigned __int64 Dr3;
  /* 0x0068 */ unsigned __int64 Dr6;
  /* 0x0070 */ unsigned __int64 Dr7;
  /* 0x0078 */ unsigned __int64 Rax;
  /* 0x0080 */ unsigned __int64 Rcx;
  /* 0x0088 */ unsigned __int64 Rdx;
  /* 0x0090 */ unsigned __int64 Rbx;
  /* 0x0098 */ unsigned __int64 Rsp;
  /* 0x00a0 */ unsigned __int64 Rbp;
  /* 0x00a8 */ unsigned __int64 Rsi;
  /* 0x00b0 */ unsigned __int64 Rdi;
  /* 0x00b8 */ unsigned __int64 R8;
  /* 0x00c0 */ unsigned __int64 R9;
  /* 0x00c8 */ unsigned __int64 R10;
  /* 0x00d0 */ unsigned __int64 R11;
  /* 0x00d8 */ unsigned __int64 R12;
  /* 0x00e0 */ unsigned __int64 R13;
  /* 0x00e8 */ unsigned __int64 R14;
  /* 0x00f0 */ unsigned __int64 R15;
  /* 0x00f8 */ unsigned __int64 Rip;
  union
  {
    /* 0x0100 */ struct _XSAVE_FORMAT FltSave;
    struct
    {
      /* 0x0100 */ struct _M128A Header[2];
      /* 0x0120 */ struct _M128A Legacy[8];
      /* 0x01a0 */ struct _M128A Xmm0;
      /* 0x01b0 */ struct _M128A Xmm1;
      /* 0x01c0 */ struct _M128A Xmm2;
      /* 0x01d0 */ struct _M128A Xmm3;
      /* 0x01e0 */ struct _M128A Xmm4;
      /* 0x01f0 */ struct _M128A Xmm5;
      /* 0x0200 */ struct _M128A Xmm6;
      /* 0x0210 */ struct _M128A Xmm7;
      /* 0x0220 */ struct _M128A Xmm8;
      /* 0x0230 */ struct _M128A Xmm9;
      /* 0x0240 */ struct _M128A Xmm10;
      /* 0x0250 */ struct _M128A Xmm11;
      /* 0x0260 */ struct _M128A Xmm12;
      /* 0x0270 */ struct _M128A Xmm13;
      /* 0x0280 */ struct _M128A Xmm14;
      /* 0x0290 */ struct _M128A Xmm15;
    }; /* size: 0x01a0 */
  }; /* size: 0x0200 */
  /* 0x0300 */ struct _M128A VectorRegister[26];
  /* 0x04a0 */ unsigned __int64 VectorControl;
  /* 0x04a8 */ unsigned __int64 DebugControl;
  /* 0x04b0 */ unsigned __int64 LastBranchToRip;
  /* 0x04b8 */ unsigned __int64 LastBranchFromRip;
  /* 0x04c0 */ unsigned __int64 LastExceptionToRip;
  /* 0x04c8 */ unsigned __int64 LastExceptionFromRip;
} CONTEXT, *PCONTEXT; /* size: 0x04d0 */

typedef struct _KPROCESSOR_STATE
{
  /* 0x0000 */ struct _KSPECIAL_REGISTERS SpecialRegisters;
  /* 0x00f0 */ struct _CONTEXT ContextFrame;
} KPROCESSOR_STATE, *PKPROCESSOR_STATE; /* size: 0x05c0 */

typedef union _KPRCB_BPB_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned short CpuIdle : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned short FlushRsbOnTrap : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned short IbpbOnReturn : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned short IbpbOnTrap : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned short IbpbOnRetpolineExit : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned short FlushRsbOnReturn : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned short FlushRsbOnRetpolineExit : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned short FlushBhbOnTrap : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned short DivideOnReturn : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned short Reserved1 : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned short Spare : 6; /* bit position: 10 */
    }; /* bitfield */
    /* 0x0000 */ unsigned short AllFlags;
  }; /* size: 0x0002 */
} KPRCB_BPB_STATE, *PKPRCB_BPB_STATE; /* size: 0x0002 */

typedef union _KPRCB_BPB_FEATURES
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char ClearOnIdle : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char Enabled : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char Smep : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned char KCet : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned char BhbFlushSequence : 2; /* bit position: 4 */
      /* 0x0000 */ unsigned char FeaturesReserved : 2; /* bit position: 6 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AllFlags;
  }; /* size: 0x0001 */
} KPRCB_BPB_FEATURES, *PKPRCB_BPB_FEATURES; /* size: 0x0001 */

typedef union _KPRCB_BPB_RETPOLINE_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char RunningNonRetpolineCode : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char IndirectCallsSafe : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char RetpolineEnabled : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned char RetpolineStateReserved : 5; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AllFlags;
  }; /* size: 0x0001 */
} KPRCB_BPB_RETPOLINE_STATE, *PKPRCB_BPB_RETPOLINE_STATE; /* size: 0x0001 */

typedef struct _KSPIN_LOCK_QUEUE
{
  /* 0x0000 */ struct _KSPIN_LOCK_QUEUE* volatile Next;
  /* 0x0008 */ unsigned __int64* volatile Lock;
} KSPIN_LOCK_QUEUE, *PKSPIN_LOCK_QUEUE; /* size: 0x0010 */

typedef struct _PP_LOOKASIDE_LIST
{
  /* 0x0000 */ struct _GENERAL_LOOKASIDE* P;
  /* 0x0008 */ struct _GENERAL_LOOKASIDE* L;
} PP_LOOKASIDE_LIST, *PPP_LOOKASIDE_LIST; /* size: 0x0010 */

typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 Reserved : 4; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderX64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef enum _POOL_TYPE
{
  NonPagedPool = 0,
  NonPagedPoolExecute = 0,
  PagedPool = 1,
  NonPagedPoolMustSucceed = 2,
  DontUseThisType = 3,
  NonPagedPoolCacheAligned = 4,
  PagedPoolCacheAligned = 5,
  NonPagedPoolCacheAlignedMustS = 6,
  MaxPoolType = 7,
  NonPagedPoolBase = 0,
  NonPagedPoolBaseMustSucceed = 2,
  NonPagedPoolBaseCacheAligned = 4,
  NonPagedPoolBaseCacheAlignedMustS = 6,
  NonPagedPoolSession = 32,
  PagedPoolSession = 33,
  NonPagedPoolMustSucceedSession = 34,
  DontUseThisTypeSession = 35,
  NonPagedPoolCacheAlignedSession = 36,
  PagedPoolCacheAlignedSession = 37,
  NonPagedPoolCacheAlignedMustSSession = 38,
  NonPagedPoolNx = 512,
  NonPagedPoolNxCacheAligned = 516,
  NonPagedPoolSessionNx = 544,
} POOL_TYPE, *PPOOL_TYPE;

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _GENERAL_LOOKASIDE_POOL
{
  union
  {
    /* 0x0000 */ union _SLIST_HEADER ListHead;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY SingleListHead;
  }; /* size: 0x0010 */
  /* 0x0010 */ unsigned short Depth;
  /* 0x0012 */ unsigned short MaximumDepth;
  /* 0x0014 */ unsigned long TotalAllocates;
  union
  {
    /* 0x0018 */ unsigned long AllocateMisses;
    /* 0x0018 */ unsigned long AllocateHits;
  }; /* size: 0x0004 */
  /* 0x001c */ unsigned long TotalFrees;
  union
  {
    /* 0x0020 */ unsigned long FreeMisses;
    /* 0x0020 */ unsigned long FreeHits;
  }; /* size: 0x0004 */
  /* 0x0024 */ enum _POOL_TYPE Type;
  /* 0x0028 */ unsigned long Tag;
  /* 0x002c */ unsigned long Size;
  union
  {
    /* 0x0030 */ void* AllocateEx /* function */;
    /* 0x0030 */ void* Allocate /* function */;
  }; /* size: 0x0008 */
  union
  {
    /* 0x0038 */ void* FreeEx /* function */;
    /* 0x0038 */ void* Free /* function */;
  }; /* size: 0x0008 */
  /* 0x0040 */ struct _LIST_ENTRY ListEntry;
  /* 0x0050 */ unsigned long LastTotalAllocates;
  union
  {
    /* 0x0054 */ unsigned long LastAllocateMisses;
    /* 0x0054 */ unsigned long LastAllocateHits;
  }; /* size: 0x0004 */
  /* 0x0058 */ unsigned long Future[2];
} GENERAL_LOOKASIDE_POOL, *PGENERAL_LOOKASIDE_POOL; /* size: 0x0060 */

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

typedef struct _KAFFINITY_EX
{
  /* 0x0000 */ unsigned short Count;
  /* 0x0002 */ unsigned short Size;
  /* 0x0004 */ unsigned long Reserved;
  union
  {
    /* 0x0008 */ unsigned __int64 Bitmap[1];
    /* 0x0008 */ unsigned __int64 StaticBitmap[32];
  }; /* size: 0x0100 */
} KAFFINITY_EX, *PKAFFINITY_EX; /* size: 0x0108 */

typedef struct _KSTATIC_AFFINITY_BLOCK
{
  union
  {
    /* 0x0000 */ struct _KAFFINITY_EX KeFlushTbAffinity;
    /* 0x0000 */ struct _KAFFINITY_EX KeFlushWbAffinity;
    /* 0x0000 */ struct _KAFFINITY_EX KeSlistRollbackAffinity;
    /* 0x0000 */ struct _KAFFINITY_EX KeSyncContextAffinity;
    /* 0x0000 */ struct _KAFFINITY_EX KeRcuAffinity;
  }; /* size: 0x0108 */
  /* 0x0108 */ struct _KAFFINITY_EX KeFlushTbDeepIdleAffinity;
  /* 0x0210 */ struct _KAFFINITY_EX KeIpiSendAffinity;
  /* 0x0318 */ struct _KAFFINITY_EX KeIpiSendIpiSet;
  /* 0x0420 */ unsigned __int64 Padding[128];
} KSTATIC_AFFINITY_BLOCK, *PKSTATIC_AFFINITY_BLOCK; /* size: 0x0820 */

typedef struct _KSOFTWARE_INTERRUPT_BATCH
{
  /* 0x0000 */ unsigned char Level;
  /* 0x0001 */ unsigned char TargetType;
  /* 0x0002 */ unsigned char ReservedBatchInProgress;
  /* 0x0003 */ unsigned char Spare;
  /* 0x0004 */ unsigned long SingleTargetIndex;
  /* 0x0008 */ struct _KAFFINITY_EX MultipleTargetAffinity;
  /* 0x0110 */ unsigned __int64 Padding[32];
} KSOFTWARE_INTERRUPT_BATCH, *PKSOFTWARE_INTERRUPT_BATCH; /* size: 0x0210 */

typedef struct _KDPC_LIST
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY ListHead;
  /* 0x0008 */ struct _SINGLE_LIST_ENTRY* LastEntry;
} KDPC_LIST, *PKDPC_LIST; /* size: 0x0010 */

typedef struct _KDPC_DATA
{
  /* 0x0000 */ struct _KDPC_LIST DpcList;
  /* 0x0010 */ unsigned __int64 DpcLock;
  /* 0x0018 */ volatile long DpcQueueDepth;
  /* 0x001c */ unsigned long DpcCount;
  /* 0x0020 */ struct _KDPC* volatile ActiveDpc;
  /* 0x0028 */ unsigned long LongDpcPresent;
  /* 0x002c */ unsigned long Padding;
} KDPC_DATA, *PKDPC_DATA; /* size: 0x0030 */

typedef struct _KE_PRCB_RCU_DATA
{
  /* 0x0000 */ unsigned long NestingLevel;
  /* 0x0004 */ unsigned char DispatchPin;
  /* 0x0005 */ unsigned char GracePeriodNeeded;
  /* 0x0006 */ unsigned char ExpediteReporting;
  /* 0x0007 */ char IdleState;
  /* 0x0008 */ unsigned __int64 GraceSequenceQuiescent;
  /* 0x0010 */ unsigned __int64 GraceSequenceReported;
  /* 0x0018 */ struct _LIST_ENTRY* AwaitingCompletion;
} KE_PRCB_RCU_DATA, *PKE_PRCB_RCU_DATA; /* size: 0x0020 */

typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

typedef struct _KTIMER_TABLE_ENTRY
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ struct _LIST_ENTRY Entry;
  /* 0x0018 */ union _ULARGE_INTEGER Time;
} KTIMER_TABLE_ENTRY, *PKTIMER_TABLE_ENTRY; /* size: 0x0020 */

typedef struct _KTIMER_TABLE_STATE
{
  /* 0x0000 */ unsigned __int64 LastTimerExpiration[2];
  /* 0x0010 */ unsigned long LastTimerHand[2];
} KTIMER_TABLE_STATE, *PKTIMER_TABLE_STATE; /* size: 0x0018 */

typedef struct _KTIMER_TABLE
{
  /* 0x0000 */ struct _KTIMER* TimerExpiry[64];
  /* 0x0200 */ struct _KTIMER_TABLE_ENTRY TimerEntries[256][2];
  /* 0x4200 */ struct _KTIMER_TABLE_STATE TableState;
} KTIMER_TABLE, *PKTIMER_TABLE; /* size: 0x4218 */

typedef struct _DISPATCHER_HEADER
{
  union
  {
    /* 0x0000 */ volatile long Lock;
    /* 0x0000 */ long LockNV;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Signalling;
      /* 0x0002 */ unsigned char Size;
      /* 0x0003 */ unsigned char Reserved1;
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char TimerType;
      union
      {
        /* 0x0001 */ unsigned char TimerControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Absolute : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Wake : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char EncodedTolerableDelay : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Hand;
          union
          {
            /* 0x0003 */ unsigned char TimerMiscFlags;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char Index : 6; /* bit position: 0 */
              /* 0x0003 */ unsigned char Inserted : 1; /* bit position: 6 */
              /* 0x0003 */ volatile unsigned char Expired : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char Timer2Type;
      union
      {
        /* 0x0001 */ unsigned char Timer2Flags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Timer2Inserted : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char Timer2Expiring : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char Timer2CancelPending : 1; /* bit position: 2 */
            /* 0x0001 */ unsigned char Timer2SetPending : 1; /* bit position: 3 */
            /* 0x0001 */ unsigned char Timer2Running : 1; /* bit position: 4 */
            /* 0x0001 */ unsigned char Timer2Disabled : 1; /* bit position: 5 */
            /* 0x0001 */ unsigned char Timer2ReservedFlags : 2; /* bit position: 6 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char Timer2ComponentId;
          /* 0x0003 */ unsigned char Timer2RelativeId;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char QueueType;
      union
      {
        /* 0x0001 */ unsigned char QueueControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0001 */ unsigned char Abandoned : 1; /* bit position: 0 */
            /* 0x0001 */ unsigned char DisableIncrement : 1; /* bit position: 1 */
            /* 0x0001 */ unsigned char QueueReservedControlFlags : 6; /* bit position: 2 */
          }; /* bitfield */
          /* 0x0002 */ unsigned char QueueSize;
          /* 0x0003 */ unsigned char QueueReserved;
        }; /* size: 0x0003 */
      }; /* size: 0x0003 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char ThreadType;
      /* 0x0001 */ unsigned char ThreadReserved;
      union
      {
        /* 0x0002 */ unsigned char ThreadControlFlags;
        struct
        {
          struct /* bitfield */
          {
            /* 0x0002 */ unsigned char CycleProfiling : 1; /* bit position: 0 */
            /* 0x0002 */ unsigned char CounterProfiling : 1; /* bit position: 1 */
            /* 0x0002 */ unsigned char GroupScheduling : 1; /* bit position: 2 */
            /* 0x0002 */ unsigned char AffinitySet : 1; /* bit position: 3 */
            /* 0x0002 */ unsigned char Tagged : 1; /* bit position: 4 */
            /* 0x0002 */ unsigned char EnergyProfiling : 1; /* bit position: 5 */
            /* 0x0002 */ unsigned char SchedulerAssist : 1; /* bit position: 6 */
            /* 0x0002 */ unsigned char ThreadReservedControlFlags : 1; /* bit position: 7 */
          }; /* bitfield */
          union
          {
            /* 0x0003 */ unsigned char DebugActive;
            struct /* bitfield */
            {
              /* 0x0003 */ unsigned char ActiveDR7 : 1; /* bit position: 0 */
              /* 0x0003 */ unsigned char Instrumented : 1; /* bit position: 1 */
              /* 0x0003 */ unsigned char Minimal : 1; /* bit position: 2 */
              /* 0x0003 */ unsigned char Reserved4 : 2; /* bit position: 3 */
              /* 0x0003 */ unsigned char AltSyscall : 1; /* bit position: 5 */
              /* 0x0003 */ unsigned char Emulation : 1; /* bit position: 6 */
              /* 0x0003 */ unsigned char Reserved5 : 1; /* bit position: 7 */
            }; /* bitfield */
          }; /* size: 0x0001 */
        }; /* size: 0x0002 */
      }; /* size: 0x0002 */
    }; /* size: 0x0004 */
    struct
    {
      /* 0x0000 */ unsigned char MutantType;
      /* 0x0001 */ unsigned char MutantSize;
      /* 0x0002 */ unsigned char DpcActive;
      /* 0x0003 */ unsigned char MutantReserved;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0018 */

typedef struct _KGATE
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KGATE, *PKGATE; /* size: 0x0018 */

typedef struct _KDPC
{
  union
  {
    /* 0x0000 */ unsigned long TargetInfoAsUlong;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Importance;
      /* 0x0002 */ volatile unsigned short Number;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0008 */ struct _SINGLE_LIST_ENTRY DpcListEntry;
  /* 0x0010 */ unsigned __int64 ProcessorHistory;
  /* 0x0018 */ void* DeferredRoutine /* function */;
  /* 0x0020 */ void* DeferredContext;
  /* 0x0028 */ void* SystemArgument1;
  /* 0x0030 */ void* SystemArgument2;
  /* 0x0038 */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0040 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0008 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0008 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef struct _KMCE_RECOVERY_CONTEXT
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long Reserved;
  union
  {
    /* 0x0008 */ unsigned __int64 PhysicalAddress;
    /* 0x0008 */ void* Record;
  }; /* size: 0x0008 */
} KMCE_RECOVERY_CONTEXT, *PKMCE_RECOVERY_CONTEXT; /* size: 0x0010 */

typedef struct _PROC_IDLE_POLICY
{
  /* 0x0000 */ unsigned char PromotePercent;
  /* 0x0001 */ unsigned char DemotePercent;
  /* 0x0002 */ unsigned char PromotePercentBase;
  /* 0x0003 */ unsigned char DemotePercentBase;
  /* 0x0004 */ unsigned char AllowScaling;
  /* 0x0005 */ unsigned char ForceLightIdle;
} PROC_IDLE_POLICY, *PPROC_IDLE_POLICY; /* size: 0x0006 */

typedef union _PPM_IDLE_SYNCHRONIZATION_STATE
{
  union
  {
    /* 0x0000 */ long AsLong;
    struct /* bitfield */
    {
      /* 0x0000 */ long RefCount : 24; /* bit position: 0 */
      /* 0x0000 */ unsigned long State : 8; /* bit position: 24 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PPM_IDLE_SYNCHRONIZATION_STATE, *PPPM_IDLE_SYNCHRONIZATION_STATE; /* size: 0x0004 */

typedef struct _PROC_FEEDBACK
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ unsigned __int64 CyclesLast;
  /* 0x0010 */ unsigned __int64 CyclesActive;
  /* 0x0018 */ struct _PROC_FEEDBACK_COUNTER* Counters[2];
  /* 0x0028 */ unsigned __int64 LastUpdateTime;
  /* 0x0030 */ unsigned __int64 UnscaledTime;
  /* 0x0038 */ volatile __int64 UnaccountedTime;
  /* 0x0040 */ unsigned __int64 ScaledTime[2];
  /* 0x0050 */ unsigned __int64 UnaccountedKernelTime;
  /* 0x0058 */ unsigned __int64 PerformanceScaledKernelTime;
  /* 0x0060 */ unsigned long UserTimeLast;
  /* 0x0064 */ unsigned long KernelTimeLast;
  /* 0x0068 */ unsigned __int64 IdleGenerationNumberLast;
  /* 0x0070 */ unsigned __int64 HvActiveTimeLast;
  /* 0x0078 */ unsigned __int64 StallCyclesLast;
  /* 0x0080 */ unsigned __int64 StallTime;
  /* 0x0088 */ unsigned char KernelTimesIndex;
  /* 0x0089 */ unsigned char CounterDiscardsIdleTime;
  /* 0x008a */ unsigned char CounterReadOptimize;
  /* 0x008b */ char __PADDING__[5];
} PROC_FEEDBACK, *PPROC_FEEDBACK; /* size: 0x0090 */

typedef enum _PROC_HYPERVISOR_STATE
{
  ProcHypervisorNone = 0,
  ProcHypervisorPresent = 1,
  ProcHypervisorPower = 2,
  ProcHypervisorHvCounters = 3,
} PROC_HYPERVISOR_STATE, *PPROC_HYPERVISOR_STATE;

typedef struct _PPM_FFH_THROTTLE_STATE_INFO
{
  /* 0x0000 */ unsigned char EnableLogging;
  /* 0x0004 */ unsigned long MismatchCount;
  /* 0x0008 */ unsigned char Initialized;
  /* 0x0010 */ unsigned __int64 LastValue;
  /* 0x0018 */ union _LARGE_INTEGER LastLogTickCount;
} PPM_FFH_THROTTLE_STATE_INFO, *PPPM_FFH_THROTTLE_STATE_INFO; /* size: 0x0020 */

typedef struct _PROC_IDLE_SNAP
{
  /* 0x0000 */ unsigned __int64 Time;
  /* 0x0008 */ unsigned __int64 Idle;
} PROC_IDLE_SNAP, *PPROC_IDLE_SNAP; /* size: 0x0010 */

typedef struct _PROC_PERF_CHECK_CONTEXT
{
  /* 0x0000 */ struct _PROC_PERF_DOMAIN* Domain;
  /* 0x0008 */ struct _PROC_PERF_CONSTRAINT* Constraint;
  /* 0x0010 */ struct _PROC_PERF_CHECK* PerfCheck;
  /* 0x0018 */ struct _PROC_PERF_LOAD* Load;
  /* 0x0020 */ struct _PROC_PERF_HISTORY* PerfHistory;
  /* 0x0028 */ unsigned long Utility;
  /* 0x002c */ unsigned long AffinitizedUtility;
  /* 0x0030 */ unsigned long MediaUtility;
  /* 0x0034 */ unsigned long ImportantUtility;
  /* 0x0038 */ unsigned long IdealUtility;
  /* 0x003c */ unsigned short LatestAffinitizedPercent;
  /* 0x003e */ unsigned short AveragePerformancePercent;
  /* 0x0040 */ unsigned long RelativePerformance;
  /* 0x0044 */ unsigned char NtProcessor;
  /* 0x0045 */ char __PADDING__[3];
} PROC_PERF_CHECK_CONTEXT, *PPROC_PERF_CHECK_CONTEXT; /* size: 0x0048 */

typedef enum _KHETERO_CPU_QOS
{
  KHeteroCpuQosDefault = 0,
  KHeteroCpuQosHigh = 0,
  KHeteroCpuQosMedium = 1,
  KHeteroCpuQosLow = 2,
  KHeteroCpuQosMultimedia = 3,
  KHeteroCpuQosDeadline = 4,
  KHeteroCpuQosEco = 5,
  KHeteroCpuQosUtility = 6,
  KHeteroCpuQosDynamic = 7,
  KHeteroCpuQosMax = 7,
} KHETERO_CPU_QOS, *PKHETERO_CPU_QOS;

typedef struct _PROCESSOR_POWER_STATE
{
  /* 0x0000 */ struct _PPM_IDLE_STATES* IdleStates;
  /* 0x0008 */ struct _PROC_IDLE_ACCOUNTING* IdleAccounting;
  /* 0x0010 */ unsigned __int64 IdleTimeLast;
  /* 0x0018 */ unsigned __int64 IdleTimeTotal;
  /* 0x0020 */ volatile unsigned __int64 IdleSequenceNumber;
  /* 0x0028 */ unsigned __int64 IdleTimeEntry;
  union
  {
    /* 0x0030 */ unsigned __int64 IdleTimeExpiration;
    /* 0x0030 */ volatile __int64 IdleWakeTime;
  }; /* size: 0x0008 */
  /* 0x0038 */ unsigned long IdleWakeLatencyLimit;
  /* 0x003c */ unsigned char NonInterruptibleTransition;
  /* 0x003d */ unsigned char PepWokenTransition;
  /* 0x003e */ unsigned char HvTargetState;
  /* 0x0040 */ unsigned long TargetIdleState;
  /* 0x0044 */ struct _PROC_IDLE_POLICY IdlePolicy;
  /* 0x004c */ volatile union _PPM_IDLE_SYNCHRONIZATION_STATE Synchronization;
  /* 0x0050 */ struct _PROC_FEEDBACK PerfFeedback;
  /* 0x00e0 */ enum _PROC_HYPERVISOR_STATE Hypervisor;
  /* 0x00e4 */ unsigned long LastSysTime;
  /* 0x00e8 */ unsigned __int64 WmiDispatchPtr;
  /* 0x00f0 */ long WmiInterfaceEnabled;
  /* 0x00f8 */ struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;
  /* 0x0118 */ struct _KDPC PerfActionDpc;
  /* 0x0158 */ volatile long PerfActionMask;
  /* 0x0160 */ struct _PROC_IDLE_SNAP HvIdleCheck;
  /* 0x0170 */ struct _PROC_PERF_CHECK_CONTEXT CheckContext;
  /* 0x01b8 */ struct _PPM_CONCURRENCY_ACCOUNTING* Concurrency;
  /* 0x01c0 */ struct _PPM_CONCURRENCY_ACCOUNTING* ClassConcurrency;
  /* 0x01c8 */ unsigned char ArchitecturalEfficiencyClass;
  /* 0x01c9 */ volatile unsigned char PerformanceSchedulingClass;
  /* 0x01ca */ volatile unsigned char EfficiencySchedulingClass;
  /* 0x01cb */ unsigned char Reserved;
  /* 0x01cc */ unsigned char Parked;
  /* 0x01cd */ unsigned char SoftParked;
  /* 0x01ce */ unsigned char LongPriorQosPeriod;
  union
  {
    /* 0x01d0 */ unsigned __int64 SnapTimeLast;
    /* 0x01d0 */ unsigned __int64 EnergyConsumed;
  }; /* size: 0x0008 */
  /* 0x01d8 */ unsigned __int64 ActiveTime;
  /* 0x01e0 */ unsigned __int64 TotalTime;
  /* 0x01e8 */ struct _POP_FX_DEVICE* FxDevice;
  /* 0x01f0 */ unsigned __int64 LastQosTransitionTime;
  /* 0x01f8 */ unsigned __int64 QosTransitionHysteresis;
  /* 0x0200 */ enum _KHETERO_CPU_QOS RequestedQosClass;
  /* 0x0204 */ enum _KHETERO_CPU_QOS ResolvedQosClass;
  /* 0x0208 */ unsigned short QosEquivalencyMask;
  /* 0x020a */ unsigned short HwFeedbackTableOffset;
  /* 0x020c */ unsigned char HwFeedbackParkHint;
  /* 0x020d */ unsigned char HeteroCoreType;
  /* 0x020e */ unsigned short HwFeedbackTableIndex;
  /* 0x0210 */ struct _KHETRO_HWFEEDBACK_TYPE* HwFeedbackClassList;
  /* 0x0218 */ struct _PROCESSOR_CYCLES_WORKLOAD_CLASS* EeCyclesWorkloadClassList;
  /* 0x0220 */ struct _PROCESSOR_CYCLES_WORKLOAD_CLASS* PerfCyclesWorkloadClassList;
  /* 0x0228 */ unsigned char ContainmentGroupType;
  /* 0x022a */ unsigned short FrequencyBucketThresholds[4];
  /* 0x0232 */ char __PADDING__[6];
} PROCESSOR_POWER_STATE, *PPROCESSOR_POWER_STATE; /* size: 0x0238 */

typedef enum _PROCESSOR_CACHE_TYPE
{
  CacheUnified = 0,
  CacheInstruction = 1,
  CacheData = 2,
  CacheTrace = 3,
  CacheUnknown = 4,
} PROCESSOR_CACHE_TYPE, *PPROCESSOR_CACHE_TYPE;

typedef struct _CACHE_DESCRIPTOR
{
  /* 0x0000 */ unsigned char Level;
  /* 0x0001 */ unsigned char Associativity;
  /* 0x0002 */ unsigned short LineSize;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ enum _PROCESSOR_CACHE_TYPE Type;
} CACHE_DESCRIPTOR, *PCACHE_DESCRIPTOR; /* size: 0x000c */

typedef struct _SYNCH_COUNTERS
{
  /* 0x0000 */ unsigned long SpinLockAcquireCount;
  /* 0x0004 */ unsigned long SpinLockContentionCount;
  /* 0x0008 */ unsigned long SpinLockSpinCount;
  /* 0x000c */ unsigned long IpiSendRequestBroadcastCount;
  /* 0x0010 */ unsigned long IpiSendRequestRoutineCount;
  /* 0x0014 */ unsigned long IpiSendSoftwareInterruptCount;
  /* 0x0018 */ unsigned long ExInitializeResourceCount;
  /* 0x001c */ unsigned long ExReInitializeResourceCount;
  /* 0x0020 */ unsigned long ExDeleteResourceCount;
  /* 0x0024 */ unsigned long ExecutiveResourceAcquiresCount;
  /* 0x0028 */ unsigned long ExecutiveResourceContentionsCount;
  /* 0x002c */ unsigned long ExecutiveResourceReleaseExclusiveCount;
  /* 0x0030 */ unsigned long ExecutiveResourceReleaseSharedCount;
  /* 0x0034 */ unsigned long ExecutiveResourceConvertsCount;
  /* 0x0038 */ unsigned long ExAcqResExclusiveAttempts;
  /* 0x003c */ unsigned long ExAcqResExclusiveAcquiresExclusive;
  /* 0x0040 */ unsigned long ExAcqResExclusiveAcquiresExclusiveRecursive;
  /* 0x0044 */ unsigned long ExAcqResExclusiveWaits;
  /* 0x0048 */ unsigned long ExAcqResExclusiveNotAcquires;
  /* 0x004c */ unsigned long ExAcqResSharedAttempts;
  /* 0x0050 */ unsigned long ExAcqResSharedAcquiresExclusive;
  /* 0x0054 */ unsigned long ExAcqResSharedAcquiresShared;
  /* 0x0058 */ unsigned long ExAcqResSharedAcquiresSharedRecursive;
  /* 0x005c */ unsigned long ExAcqResSharedWaits;
  /* 0x0060 */ unsigned long ExAcqResSharedNotAcquires;
  /* 0x0064 */ unsigned long ExAcqResSharedStarveExclusiveAttempts;
  /* 0x0068 */ unsigned long ExAcqResSharedStarveExclusiveAcquiresExclusive;
  /* 0x006c */ unsigned long ExAcqResSharedStarveExclusiveAcquiresShared;
  /* 0x0070 */ unsigned long ExAcqResSharedStarveExclusiveAcquiresSharedRecursive;
  /* 0x0074 */ unsigned long ExAcqResSharedStarveExclusiveWaits;
  /* 0x0078 */ unsigned long ExAcqResSharedStarveExclusiveNotAcquires;
  /* 0x007c */ unsigned long ExAcqResSharedWaitForExclusiveAttempts;
  /* 0x0080 */ unsigned long ExAcqResSharedWaitForExclusiveAcquiresExclusive;
  /* 0x0084 */ unsigned long ExAcqResSharedWaitForExclusiveAcquiresShared;
  /* 0x0088 */ unsigned long ExAcqResSharedWaitForExclusiveAcquiresSharedRecursive;
  /* 0x008c */ unsigned long ExAcqResSharedWaitForExclusiveWaits;
  /* 0x0090 */ unsigned long ExAcqResSharedWaitForExclusiveNotAcquires;
  /* 0x0094 */ unsigned long ExSetResOwnerPointerExclusive;
  /* 0x0098 */ unsigned long ExSetResOwnerPointerSharedNew;
  /* 0x009c */ unsigned long ExSetResOwnerPointerSharedOld;
  /* 0x00a0 */ unsigned long ExTryToAcqExclusiveAttempts;
  /* 0x00a4 */ unsigned long ExTryToAcqExclusiveAcquires;
  /* 0x00a8 */ unsigned long ExBoostExclusiveOwner;
  /* 0x00ac */ unsigned long ExBoostSharedOwners;
  /* 0x00b0 */ unsigned long ExEtwSynchTrackingNotificationsCount;
  /* 0x00b4 */ unsigned long ExEtwSynchTrackingNotificationsAccountedCount;
} SYNCH_COUNTERS, *PSYNCH_COUNTERS; /* size: 0x00b8 */

typedef struct _FILESYSTEM_DISK_COUNTERS
{
  /* 0x0000 */ unsigned __int64 FsBytesRead;
  /* 0x0008 */ unsigned __int64 FsBytesWritten;
} FILESYSTEM_DISK_COUNTERS, *PFILESYSTEM_DISK_COUNTERS; /* size: 0x0010 */

typedef struct _KENTROPY_TIMING_STATE
{
  /* 0x0000 */ unsigned long EntropyCount;
  /* 0x0004 */ unsigned long Buffer[64];
  /* 0x0108 */ struct _KDPC Dpc;
  /* 0x0148 */ unsigned long LastDeliveredBuffer;
  /* 0x0150 */ void* ReservedRawDataBuffer;
} KENTROPY_TIMING_STATE, *PKENTROPY_TIMING_STATE; /* size: 0x0158 */

typedef struct _SYMCRYPT_ENTROPY_ACCUMULATOR_STATE
{
  /* 0x0000 */ unsigned char buffer[256];
  /* 0x0100 */ struct _KDPC Dpc;
  /* 0x0140 */ unsigned __int64 nSamplesAccumulated;
  /* 0x0148 */ unsigned __int64 nHealthTestFailures;
  /* 0x0150 */ unsigned char* pCombinedSampleBuffer;
  /* 0x0158 */ unsigned __int64 nRawSamples;
  /* 0x0160 */ unsigned int accumulatorId;
  /* 0x0164 */ unsigned int nDPCScheduleFailures;
  /* 0x0168 */ unsigned char dpcInProgress;
  /* 0x0169 */ char __PADDING__[23];
} SYMCRYPT_ENTROPY_ACCUMULATOR_STATE, *PSYMCRYPT_ENTROPY_ACCUMULATOR_STATE; /* size: 0x0180 */

typedef struct _IOP_IRP_STACK_PROFILER
{
  /* 0x0000 */ unsigned long Profile[20];
  /* 0x0050 */ unsigned long TotalIrps;
} IOP_IRP_STACK_PROFILER, *PIOP_IRP_STACK_PROFILER; /* size: 0x0054 */

typedef struct _KSECURE_FAULT_INFORMATION
{
  /* 0x0000 */ unsigned __int64 FaultCode;
  /* 0x0008 */ unsigned __int64 FaultVa;
  /* 0x0010 */ unsigned __int64 FaultPa;
} KSECURE_FAULT_INFORMATION, *PKSECURE_FAULT_INFORMATION; /* size: 0x0018 */

typedef struct _KTIMER_EXPIRATION_TRACE
{
  /* 0x0000 */ unsigned __int64 InterruptTime;
  /* 0x0008 */ union _LARGE_INTEGER PerformanceCounter;
} KTIMER_EXPIRATION_TRACE, *PKTIMER_EXPIRATION_TRACE; /* size: 0x0010 */

typedef enum _KCLOCK_TIMER_ONE_SHOT_STATE
{
  KClockTimerOneShotUnarmed = 0,
  KClockTimerOneShotArmed = 1,
  KClockTimerOneShotRearmRequired = 2,
  KClockTimerOneShotInvalid = 3,
} KCLOCK_TIMER_ONE_SHOT_STATE, *PKCLOCK_TIMER_ONE_SHOT_STATE;

typedef enum _KCLOCK_TIMER_DEADLINE_TYPE
{
  KClockTimerKTimerExpirationNonHr = 0,
  KClockTimerKTimerExpirationPseudoHr = 1,
  KClockTimerKTimer2ExpirationHr = 2,
  KClockTimerKTimersMax = 2,
  KClockTimerQuantumEnd = 3,
  KClockTimerGroupSchedulingGenerationEnd = 4,
  KClockTimerIdlePromotion = 5,
  KClockTimerBamQosHysteresisEnd = 6,
  KClockTimerMax = 7,
} KCLOCK_TIMER_DEADLINE_TYPE, *PKCLOCK_TIMER_DEADLINE_TYPE;

typedef struct _KCLOCK_TIMER_DEADLINE_ENTRY
{
  /* 0x0000 */ unsigned __int64 DueTime;
  /* 0x0008 */ unsigned long TolerableDelay;
  union
  {
    /* 0x000c */ unsigned char TypeFlags;
    struct /* bitfield */
    {
      /* 0x000c */ unsigned char Valid : 1; /* bit position: 0 */
      /* 0x000c */ unsigned char NoWake : 1; /* bit position: 1 */
      /* 0x000c */ unsigned char Unused : 6; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x000d */ char __PADDING__[3];
} KCLOCK_TIMER_DEADLINE_ENTRY, *PKCLOCK_TIMER_DEADLINE_ENTRY; /* size: 0x0010 */

typedef struct _KCLOCK_TICK_TRACE
{
  /* 0x0000 */ unsigned __int64 PerformanceCounter;
  /* 0x0008 */ unsigned __int64 PreInterruptTime;
  /* 0x0010 */ unsigned __int64 PostInterruptTime;
  /* 0x0018 */ unsigned __int64 TimeStampCounter;
  /* 0x0020 */ unsigned char IsClockOwner;
  /* 0x0021 */ char __PADDING__[7];
} KCLOCK_TICK_TRACE, *PKCLOCK_TICK_TRACE; /* size: 0x0028 */

typedef struct _KCLOCK_INCREMENT_TRACE
{
  /* 0x0000 */ unsigned long ActualIncrement;
  /* 0x0004 */ unsigned long RequestedIncrement;
  /* 0x0008 */ unsigned __int64 InterruptTime;
  /* 0x0010 */ unsigned __int64 PerformanceCounter;
  /* 0x0018 */ unsigned char OneShot;
  /* 0x0019 */ char __PADDING__[7];
} KCLOCK_INCREMENT_TRACE, *PKCLOCK_INCREMENT_TRACE; /* size: 0x0020 */

typedef struct _KCLOCK_TIMER_STATE
{
  /* 0x0000 */ unsigned __int64 NextTickDueTime;
  /* 0x0008 */ unsigned long TimeIncrement;
  /* 0x000c */ unsigned long LastRequestedTimeIncrement;
  /* 0x0010 */ enum _KCLOCK_TIMER_ONE_SHOT_STATE OneShotState;
  /* 0x0014 */ enum _KCLOCK_TIMER_DEADLINE_TYPE ExpectedWakeReason;
  /* 0x0018 */ struct _KCLOCK_TIMER_DEADLINE_ENTRY ClockTimerEntries[7];
  /* 0x0088 */ unsigned char ClockActive;
  /* 0x0089 */ unsigned char ClockArmedForIdle;
  /* 0x008c */ unsigned long ClockTickTraceIndex;
  /* 0x0090 */ unsigned long ClockIncrementTraceIndex;
  /* 0x0098 */ struct _KCLOCK_TICK_TRACE ClockTickTraces[16];
  /* 0x0318 */ struct _KCLOCK_INCREMENT_TRACE ClockIncrementTraces[16];
} KCLOCK_TIMER_STATE, *PKCLOCK_TIMER_STATE; /* size: 0x0518 */

typedef struct _MACHINE_FRAME
{
  /* 0x0000 */ unsigned __int64 Rip;
  /* 0x0008 */ unsigned short SegCs;
  /* 0x000a */ unsigned short Fill1[3];
  /* 0x0010 */ unsigned long EFlags;
  /* 0x0014 */ unsigned long Fill2;
  /* 0x0018 */ unsigned __int64 Rsp;
  /* 0x0020 */ unsigned short SegSs;
  /* 0x0022 */ unsigned short Fill3[3];
} MACHINE_FRAME, *PMACHINE_FRAME; /* size: 0x0028 */

typedef struct _MACHINE_CHECK_CONTEXT
{
  /* 0x0000 */ struct _MACHINE_FRAME MachineFrame;
  /* 0x0028 */ unsigned __int64 Rax;
  /* 0x0030 */ unsigned __int64 Rcx;
  /* 0x0038 */ unsigned __int64 Rdx;
  /* 0x0040 */ unsigned __int64 GsBase;
  /* 0x0048 */ unsigned __int64 Cr3;
} MACHINE_CHECK_CONTEXT, *PMACHINE_CHECK_CONTEXT; /* size: 0x0050 */

typedef struct _KLOCK_QUEUE_HANDLE
{
  /* 0x0000 */ struct _KSPIN_LOCK_QUEUE LockQueue;
  /* 0x0010 */ unsigned char OldIrql;
  /* 0x0011 */ char __PADDING__[7];
} KLOCK_QUEUE_HANDLE, *PKLOCK_QUEUE_HANDLE; /* size: 0x0018 */

typedef struct _KCORE_CONTROL_BLOCK
{
  /* 0x0000 */ unsigned char ProcessorCount;
  /* 0x0001 */ unsigned char ScanStartIndex;
  /* 0x0002 */ unsigned char Spare[6];
  /* 0x0008 */ struct _KPRCB* Prcbs[4];
  /* 0x0028 */ struct _KCORE_CONTROL_BLOCK_SHADOW* CoreControlBlockShadow;
} KCORE_CONTROL_BLOCK, *PKCORE_CONTROL_BLOCK; /* size: 0x0030 */

typedef union _KCCB_SHADOW_PROCESSOR_STATE
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char Idle : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char Transitioning : 1; /* bit position: 1 */
    }; /* bitfield */
    /* 0x0000 */ unsigned char AllState;
  }; /* size: 0x0001 */
} KCCB_SHADOW_PROCESSOR_STATE, *PKCCB_SHADOW_PROCESSOR_STATE; /* size: 0x0001 */

typedef struct _KCORE_CONTROL_BLOCK_SHADOW
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ volatile unsigned __int64 CurrentIsolationDomain;
  /* 0x0010 */ volatile unsigned __int64 NextIsolationDomain;
  /* 0x0018 */ unsigned char TotalProcessors;
  /* 0x0019 */ unsigned char IdleProcessors;
  /* 0x001a */ unsigned char NewDomainProcessors;
  /* 0x001b */ unsigned char Spare;
  /* 0x001c */ union _KCCB_SHADOW_PROCESSOR_STATE ProcessorStates[4];
  /* 0x0020 */ unsigned __int64 InterruptTargets[4];
} KCORE_CONTROL_BLOCK_SHADOW, *PKCORE_CONTROL_BLOCK_SHADOW; /* size: 0x0040 */

typedef struct _KREQUEST_PACKET
{
  /* 0x0000 */ void* CurrentPacket[3];
  /* 0x0018 */ void* WorkerRoutine /* function */;
} KREQUEST_PACKET, *PKREQUEST_PACKET; /* size: 0x0020 */

typedef struct _REQUEST_MAILBOX
{
  /* 0x0000 */ struct _REQUEST_MAILBOX* Next;
  /* 0x0008 */ unsigned __int64 RequestSummary;
  /* 0x0010 */ struct _KREQUEST_PACKET RequestPacket;
  /* 0x0030 */ volatile long* SubNodeTargetCountAddr;
  /* 0x0038 */ volatile long SubNodeTargetCount;
  /* 0x003c */ long __PADDING__[1];
} REQUEST_MAILBOX, *PREQUEST_MAILBOX; /* size: 0x0040 */

typedef struct _KPRCB
{
  /* 0x0000 */ unsigned long MxCsr;
  /* 0x0004 */ unsigned char LegacyNumber;
  /* 0x0005 */ unsigned char ReservedMustBeZero;
  /* 0x0006 */ unsigned char InterruptRequest;
  /* 0x0007 */ unsigned char IdleHalt;
  /* 0x0008 */ struct _KTHREAD* CurrentThread;
  /* 0x0010 */ struct _KTHREAD* NextThread;
  /* 0x0018 */ struct _KTHREAD* IdleThread;
  /* 0x0020 */ unsigned char NestingLevel;
  /* 0x0021 */ unsigned char ClockOwner;
  union
  {
    /* 0x0022 */ unsigned char PendingTickFlags;
    struct /* bitfield */
    {
      /* 0x0022 */ unsigned char PendingTick : 1; /* bit position: 0 */
      /* 0x0022 */ unsigned char PendingBackupTick : 1; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0001 */
  /* 0x0023 */ unsigned char IdleState;
  /* 0x0024 */ unsigned long Number;
  /* 0x0028 */ unsigned __int64 RspBase;
  /* 0x0030 */ unsigned __int64 PrcbLock;
  /* 0x0038 */ union _KPRIORITY_STATE* PriorityState;
  /* 0x0040 */ char CpuType;
  /* 0x0041 */ char CpuID;
  union
  {
    /* 0x0042 */ unsigned short CpuStep;
    struct
    {
      /* 0x0042 */ unsigned char CpuStepping;
      /* 0x0043 */ unsigned char CpuModel;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
  /* 0x0044 */ unsigned long MHz;
  /* 0x0048 */ unsigned __int64 HalReserved[8];
  /* 0x0088 */ unsigned short MinorVersion;
  /* 0x008a */ unsigned short MajorVersion;
  /* 0x008c */ unsigned char BuildType;
  /* 0x008d */ unsigned char CpuVendor;
  /* 0x008e */ unsigned char LegacyCoresPerPhysicalProcessor;
  /* 0x008f */ unsigned char LegacyLogicalProcessorsPerCore;
  /* 0x0090 */ unsigned __int64 TscFrequency;
  /* 0x0098 */ struct _KPRCB_TRACEPOINT_LOG* TracepointLog;
  /* 0x00a0 */ unsigned long CoresPerPhysicalProcessor;
  /* 0x00a4 */ unsigned long LogicalProcessorsPerCore;
  /* 0x00a8 */ unsigned long SelfIpiRequestSummary;
  /* 0x00ac */ unsigned char QpcToTscIncrementShift;
  /* 0x00ad */ unsigned char PrcbPad03[3];
  /* 0x00b0 */ unsigned __int64 QpcToTscIncrement;
  /* 0x00b8 */ unsigned __int64 PrcbPad04;
  /* 0x00c0 */ struct _KSCHEDULER_SUBNODE* SchedulerSubNode;
  /* 0x00c8 */ unsigned __int64 GroupSetMember;
  /* 0x00d0 */ unsigned char Group;
  /* 0x00d1 */ unsigned char GroupIndex;
  /* 0x00d2 */ unsigned char PrcbPad05[2];
  /* 0x00d4 */ unsigned long InitialApicId;
  /* 0x00d8 */ unsigned long ScbOffset;
  /* 0x00dc */ unsigned long ApicMask;
  /* 0x00e0 */ void* AcpiReserved;
  /* 0x00e8 */ unsigned long CFlushSize;
  union
  {
    /* 0x00ec */ union _KPRCBFLAG PrcbFlags;
    /* 0x00ec */ unsigned long PrcbFlagsReserved;
  }; /* size: 0x0004 */
  /* 0x00f0 */ unsigned __int64 PrcbPad11[2];
  /* 0x0100 */ struct _KPROCESSOR_STATE ProcessorState;
  /* 0x06c0 */ struct _XSAVE_AREA_HEADER* ExtendedSupervisorState;
  /* 0x06c8 */ unsigned long ProcessorSignature;
  /* 0x06cc */ unsigned long ProcessorFlags;
  union
  {
    struct
    {
      /* 0x06d0 */ unsigned __int64 TrappedSecurityDomain;
      /* 0x06d8 */ union _KPRCB_BPB_STATE BpbState;
      /* 0x06da */ union _KPRCB_BPB_STATE BpbTrappedBpbState;
      /* 0x06dc */ union _KPRCB_BPB_FEATURES BpbFeatures;
      /* 0x06dd */ unsigned char PrcbPad12b;
      /* 0x06de */ union _KPRCB_BPB_RETPOLINE_STATE BpbRetpolineState;
      /* 0x06df */ unsigned char BpbRetpolineStateOverflow;
      /* 0x06e0 */ volatile short PairRegister;
      /* 0x06e2 */ unsigned short BpbRetpolineExitSpecCtrl;
      /* 0x06e4 */ unsigned short BpbTrappedRetpolineExitSpecCtrl;
      /* 0x06e6 */ unsigned short BpbCurrentSpecCtrl;
      /* 0x06e8 */ unsigned short BpbKernelSpecCtrl;
      /* 0x06ea */ unsigned short BpbNmiSpecCtrl;
      /* 0x06ec */ unsigned short BpbUserSpecCtrl;
      /* 0x06ee */ unsigned short PrcbPad12c[1];
    }; /* size: 0x0020 */
    /* 0x06d0 */ unsigned __int64 PrcbPad12a[4];
  }; /* size: 0x0020 */
  /* 0x06f0 */ struct _KSPIN_LOCK_QUEUE LockQueue[17];
  /* 0x0800 */ struct _PP_LOOKASIDE_LIST PPLookasideList[16];
  /* 0x0900 */ struct _GENERAL_LOOKASIDE_POOL PPNxPagedLookasideList[32];
  /* 0x1500 */ struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];
  /* 0x2100 */ struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];
  /* 0x2d00 */ unsigned __int64 PrcbPad20;
  /* 0x2d08 */ struct _SINGLE_LIST_ENTRY DeferredReadyListHead;
  /* 0x2d10 */ volatile long MmPageFaultCount;
  /* 0x2d14 */ volatile long MmCopyOnWriteCount;
  /* 0x2d18 */ volatile long MmTransitionCount;
  /* 0x2d1c */ volatile long MmDemandZeroCount;
  /* 0x2d20 */ volatile long MmPageReadCount;
  /* 0x2d24 */ volatile long MmPageReadIoCount;
  /* 0x2d28 */ volatile long MmDirtyPagesWriteCount;
  /* 0x2d2c */ volatile long MmDirtyWriteIoCount;
  /* 0x2d30 */ volatile long MmMappedPagesWriteCount;
  /* 0x2d34 */ volatile long MmMappedWriteIoCount;
  /* 0x2d38 */ unsigned long KeSystemCalls;
  /* 0x2d3c */ unsigned long KeContextSwitches;
  /* 0x2d40 */ unsigned long PrcbPad40;
  /* 0x2d44 */ unsigned long CcFastReadNoWait;
  /* 0x2d48 */ unsigned long CcFastReadWait;
  /* 0x2d4c */ unsigned long CcFastReadNotPossible;
  /* 0x2d50 */ unsigned long CcCopyReadNoWait;
  /* 0x2d54 */ unsigned long CcCopyReadWait;
  /* 0x2d58 */ unsigned long CcCopyReadNoWaitMiss;
  /* 0x2d5c */ volatile long IoReadOperationCount;
  /* 0x2d60 */ volatile long IoWriteOperationCount;
  /* 0x2d64 */ volatile long IoOtherOperationCount;
  /* 0x2d68 */ union _LARGE_INTEGER IoReadTransferCount;
  /* 0x2d70 */ union _LARGE_INTEGER IoWriteTransferCount;
  /* 0x2d78 */ union _LARGE_INTEGER IoOtherTransferCount;
  /* 0x2d80 */ volatile long PacketBarrier;
  /* 0x2d84 */ volatile long TargetCount;
  /* 0x2d88 */ volatile unsigned long IpiFrozen;
  /* 0x2d8c */ unsigned long PrcbPad30;
  /* 0x2d90 */ void* IsrDpcStats;
  /* 0x2d98 */ unsigned long DeviceInterrupts;
  /* 0x2d9c */ long LookasideIrpFloat;
  /* 0x2da0 */ unsigned long InterruptLastCount;
  /* 0x2da4 */ unsigned long InterruptRate;
  /* 0x2da8 */ unsigned __int64 PrcbPad31;
  /* 0x2db0 */ struct _KPRCB* PairPrcb;
  /* 0x2db8 */ struct _KSTATIC_AFFINITY_BLOCK StaticAffinity;
  /* 0x35d8 */ struct _KSOFTWARE_INTERRUPT_BATCH DeferredDispatchInterrupts;
  /* 0x37e8 */ struct _KI_RESCHEDULE_CONTEXT* StaticRescheduleContext;
  /* 0x37f0 */ struct _KCPU_PARTITION* volatile CpuPartition;
  /* 0x37f8 */ unsigned __int64 PrcbPad35[1];
  /* 0x3800 */ union _SLIST_HEADER InterruptObjectPool;
  /* 0x3810 */ struct _RTL_HASH_TABLE* DpcRuntimeHistoryHashTable;
  /* 0x3818 */ struct _KDPC* DpcRuntimeHistoryHashTableCleanupDpc;
  /* 0x3820 */ void* CurrentDpcRoutine /* function */;
  /* 0x3828 */ unsigned __int64 CurrentDpcRuntimeHistoryCached;
  /* 0x3830 */ unsigned __int64 CurrentDpcStartTime;
  /* 0x3838 */ struct _KTHREAD* DpcDelegateThread;
  /* 0x3840 */ struct _KDPC_DATA DpcData[2];
  /* 0x38a0 */ void* DpcStack;
  /* 0x38a8 */ long MaximumDpcQueueDepth;
  /* 0x38ac */ unsigned long DpcRequestRate;
  /* 0x38b0 */ unsigned long MinimumDpcRate;
  /* 0x38b4 */ unsigned long DpcLastCount;
  /* 0x38b8 */ unsigned char ThreadDpcEnable;
  /* 0x38b9 */ volatile unsigned char QuantumEnd;
  /* 0x38ba */ volatile unsigned char DpcRoutineActive;
  /* 0x38bb */ volatile unsigned char IdleSchedule;
  union
  {
    /* 0x38bc */ volatile long DpcRequestSummary;
    /* 0x38bc */ short DpcRequestSlot[2];
    struct
    {
      /* 0x38bc */ short NormalDpcState;
      /* 0x38be */ short ThreadDpcState;
    }; /* size: 0x0004 */
    struct /* bitfield */
    {
      /* 0x38bc */ unsigned long DpcNormalProcessingActive : 1; /* bit position: 0 */
      /* 0x38bc */ unsigned long DpcNormalProcessingRequested : 1; /* bit position: 1 */
      /* 0x38bc */ unsigned long DpcNormalThreadSignal : 1; /* bit position: 2 */
      /* 0x38bc */ unsigned long DpcNormalTimerExpiration : 1; /* bit position: 3 */
      /* 0x38bc */ unsigned long DpcNormalDpcPresent : 1; /* bit position: 4 */
      /* 0x38bc */ unsigned long DpcNormalLocalInterrupt : 1; /* bit position: 5 */
      /* 0x38bc */ unsigned long DpcNormalPriorityAntiStarvation : 1; /* bit position: 6 */
      /* 0x38bc */ unsigned long DpcNormalSwapToDpcDelegate : 1; /* bit position: 7 */
      /* 0x38bc */ unsigned long DpcNormalSpare : 8; /* bit position: 8 */
      /* 0x38bc */ unsigned long DpcThreadActive : 1; /* bit position: 16 */
      /* 0x38bc */ unsigned long DpcThreadRequested : 1; /* bit position: 17 */
      /* 0x38bc */ unsigned long DpcThreadSpare : 14; /* bit position: 18 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x38c0 */ unsigned long LastTick;
  /* 0x38c4 */ unsigned long ClockInterrupts;
  /* 0x38c8 */ unsigned long ReadyScanTick;
  /* 0x38cc */ unsigned long SingleDpcSoftTimeLimitTicks;
  /* 0x38d0 */ struct _KSINGLE_DPC_SOFT_TIMEOUT_EVENT_INFO* SingleDpcSoftTimeoutEventInfo;
  /* 0x38d8 */ unsigned long CumulativeDpcSoftTimeLimitTicks;
  /* 0x38dc */ unsigned long DpcWatchdogProfileBufferSize;
  /* 0x38e0 */ struct _KE_PRCB_RCU_DATA RcuData;
  /* 0x3900 */ void* InterruptObject[256];
  /* 0x4100 */ struct _KTIMER_TABLE TimerTable;
  /* 0x8318 */ void* DpcLog;
  /* 0x8320 */ unsigned long DpcLogIndex;
  /* 0x8324 */ unsigned long DpcLogBufferSize;
  /* 0x8328 */ unsigned long PrcbPad92[6];
  /* 0x8340 */ struct _KGATE DpcGate;
  /* 0x8358 */ void* PrcbPad52;
  /* 0x8360 */ struct _KDPC CallDpc;
  /* 0x83a0 */ long ClockKeepAlive;
  /* 0x83a4 */ unsigned char PrcbPad60[2];
  union
  {
    struct
    {
      /* 0x83a6 */ unsigned char NmiActive;
      /* 0x83a7 */ unsigned char MceActive;
    }; /* size: 0x0002 */
    /* 0x83a6 */ unsigned short CombinedNmiMceActive;
  }; /* size: 0x0002 */
  /* 0x83a8 */ long DpcWatchdogPeriodTicks;
  /* 0x83ac */ long DpcWatchdogCount;
  /* 0x83b0 */ volatile long KeSpinLockOrdering;
  /* 0x83b4 */ unsigned long DpcWatchdogProfileCumulativeDpcThresholdTicks;
  /* 0x83b8 */ void* CachedPtes;
  /* 0x83c0 */ struct _LIST_ENTRY WaitListHead;
  /* 0x83d0 */ unsigned __int64 WaitLock;
  /* 0x83d8 */ unsigned long ReadySummary;
  /* 0x83dc */ long AffinitizedSelectionMask;
  /* 0x83e0 */ unsigned long QueueIndex;
  /* 0x83e4 */ unsigned long NormalPriorityQueueIndex;
  /* 0x83e8 */ unsigned long NormalPriorityReadyScanTick;
  /* 0x83ec */ unsigned long DpcWatchdogSequenceNumber;
  /* 0x83f0 */ struct _KDPC TimerExpirationDpc;
  /* 0x8430 */ struct _RTL_RB_TREE ScbQueue;
  /* 0x8440 */ struct _LIST_ENTRY DispatcherReadyListHead[32];
  /* 0x8640 */ unsigned long InterruptCount;
  /* 0x8644 */ unsigned long KernelTime;
  /* 0x8648 */ unsigned long UserTime;
  /* 0x864c */ unsigned long DpcTime;
  /* 0x8650 */ unsigned long InterruptTime;
  /* 0x8654 */ unsigned long AdjustDpcThreshold;
  /* 0x8658 */ unsigned char DebuggerSavedIRQL;
  /* 0x8659 */ unsigned char GroupSchedulingOverQuota;
  /* 0x865a */ volatile unsigned char DeepSleep;
  /* 0x865b */ unsigned char PrcbPad80;
  /* 0x865c */ unsigned long DpcTimeCount;
  /* 0x8660 */ unsigned long DpcTimeLimitTicks;
  /* 0x8664 */ unsigned long PeriodicCount;
  /* 0x8668 */ unsigned long PeriodicBias;
  /* 0x866c */ unsigned long AvailableTime;
  /* 0x8670 */ unsigned long KeExceptionDispatchCount;
  /* 0x8674 */ unsigned long ReadyThreadCount;
  /* 0x8678 */ unsigned __int64 ReadyQueueExpectedRunTime;
  /* 0x8680 */ unsigned __int64 StartCycles;
  /* 0x8688 */ unsigned __int64 TaggedCycles[4];
  /* 0x86a8 */ unsigned __int64 AffinitizedCycles;
  /* 0x86b0 */ unsigned __int64* CyclesByThreadType;
  /* 0x86b8 */ unsigned long CpuCycleScalingFactor;
  /* 0x86bc */ volatile unsigned short PerformanceScoreByClass[8];
  /* 0x86cc */ volatile unsigned short EfficiencyScoreByClass[8];
  /* 0x86dc */ unsigned char CycleAccumulationInitialized;
  /* 0x86dd */ unsigned char PrcbPad83[3];
  /* 0x86e0 */ struct _KMCE_RECOVERY_CONTEXT MceRecoveryContext;
  /* 0x86f0 */ struct _KFORCE_PARK_DUTY_CYCLE_DATA* ForceParkDutyCycleData;
  /* 0x86f8 */ unsigned __int64 StartCyclesQpc;
  /* 0x8700 */ unsigned __int64 CycleTimeQpc;
  /* 0x8708 */ unsigned __int64 NumberOfSecureFaults;
  /* 0x8710 */ unsigned long PrcbPad84[8];
  /* 0x8730 */ void* volatile CachedStacks[2];
  /* 0x8740 */ unsigned long DpcWatchdogProfileSingleDpcThresholdTicks;
  /* 0x8744 */ long PrcbPad82[3];
  /* 0x8750 */ unsigned long PageColor;
  /* 0x8754 */ unsigned long NodeColor;
  /* 0x8758 */ unsigned long PrcbPad87[2];
  /* 0x8760 */ unsigned char PrcbPad81[5];
  /* 0x8765 */ unsigned char SystemWorkKickInProgress;
  /* 0x8766 */ unsigned char ExceptionStackActive;
  /* 0x8767 */ unsigned char TbFlushListActive;
  /* 0x8768 */ void* ExceptionStack;
  /* 0x8770 */ volatile __int64 MmSpinLockOrdering;
  /* 0x8778 */ unsigned __int64 CycleTime;
  /* 0x8780 */ unsigned __int64 Cycles[2][4];
  /* 0x87c0 */ unsigned long CcFastMdlReadNoWait;
  /* 0x87c4 */ unsigned long CcFastMdlReadWait;
  /* 0x87c8 */ unsigned long CcFastMdlReadNotPossible;
  /* 0x87cc */ unsigned long CcMapDataNoWait;
  /* 0x87d0 */ unsigned long CcMapDataWait;
  /* 0x87d4 */ unsigned long CcPinMappedDataCount;
  /* 0x87d8 */ unsigned long CcPinReadNoWait;
  /* 0x87dc */ unsigned long CcPinReadWait;
  /* 0x87e0 */ unsigned long CcMdlReadNoWait;
  /* 0x87e4 */ unsigned long CcMdlReadWait;
  /* 0x87e8 */ unsigned long CcLazyWriteHotSpots;
  /* 0x87ec */ unsigned long CcLazyWriteIos;
  /* 0x87f0 */ unsigned long CcLazyWritePages;
  /* 0x87f4 */ unsigned long CcDataFlushes;
  /* 0x87f8 */ unsigned long CcDataPages;
  /* 0x87fc */ unsigned long CcLostDelayedWrites;
  /* 0x8800 */ unsigned long CcFastReadResourceMiss;
  /* 0x8804 */ unsigned long CcCopyReadWaitMiss;
  /* 0x8808 */ unsigned long CcFastMdlReadResourceMiss;
  /* 0x880c */ unsigned long CcMapDataNoWaitMiss;
  /* 0x8810 */ unsigned long CcMapDataWaitMiss;
  /* 0x8814 */ unsigned long CcPinReadNoWaitMiss;
  /* 0x8818 */ unsigned long CcPinReadWaitMiss;
  /* 0x881c */ unsigned long CcMdlReadNoWaitMiss;
  /* 0x8820 */ unsigned long CcMdlReadWaitMiss;
  /* 0x8824 */ unsigned long CcReadAheadIos;
  /* 0x8828 */ volatile long MmCacheTransitionCount;
  /* 0x882c */ volatile long MmCacheReadCount;
  /* 0x8830 */ volatile long MmCacheIoCount;
  /* 0x8834 */ unsigned long PrcbPad91;
  /* 0x8838 */ void* MmInternal;
  /* 0x8840 */ struct _PROCESSOR_POWER_STATE PowerState;
  /* 0x8a78 */ unsigned __int64 PrcbPad96[1];
  /* 0x8a80 */ void* PrcbPad90;
  /* 0x8a88 */ struct _LIST_ENTRY ScbList;
  /* 0x8a98 */ struct _KDPC ForceIdleDpc;
  /* 0x8ad8 */ struct _KDPC DpcWatchdogDpc;
  /* 0x8b18 */ unsigned __int64 PrcbPad98[7];
  /* 0x8b50 */ void* VmInternal;
  /* 0x8b58 */ struct _CACHE_DESCRIPTOR Cache[5];
  /* 0x8b94 */ unsigned long CacheCount;
  /* 0x8b98 */ volatile unsigned long CachedCommit;
  /* 0x8b9c */ volatile unsigned long CachedResidentAvailable;
  /* 0x8ba0 */ void* WheaInfo;
  /* 0x8ba8 */ void* EtwSupport;
  /* 0x8bb0 */ void* ExSaPageArray;
  /* 0x8bb8 */ unsigned long KeAlignmentFixupCount;
  /* 0x8bbc */ unsigned long PrcbPad95;
  /* 0x8bc0 */ union _SLIST_HEADER HypercallPageList;
  /* 0x8bd0 */ unsigned __int64* StatisticsPage;
  /* 0x8bd8 */ unsigned __int64 GenerationTarget;
  /* 0x8be0 */ union _LARGE_INTEGER VirtualApicAssistPage;
  /* 0x8be8 */ unsigned __int64 PrcbPad85[3];
  /* 0x8c00 */ void* HypercallCachedPages;
  /* 0x8c08 */ void* VirtualApicAssist;
  /* 0x8c10 */ struct _KAFFINITY_EX PackageProcessorSet;
  /* 0x8d18 */ unsigned __int64 PrcbPad86[32];
  union
  {
    struct
    {
      /* 0x8e18 */ unsigned long ProcessorId;
      /* 0x8e1c */ unsigned long CoreId;
      /* 0x8e20 */ unsigned long ModuleId;
      /* 0x8e24 */ unsigned long DieId;
      /* 0x8e28 */ unsigned long PackageId;
    }; /* size: 0x0014 */
    /* 0x8e18 */ unsigned long TopologyId[5];
  }; /* size: 0x0014 */
  /* 0x8e2c */ unsigned long NodeRelativeTopologyIndex[5];
  /* 0x8e40 */ unsigned __int64 SharedReadyQueueMask;
  /* 0x8e48 */ struct _KSHARED_READY_QUEUE* SharedReadyQueue;
  /* 0x8e50 */ unsigned long SharedQueueScanOwner;
  /* 0x8e54 */ unsigned long ScanSiblingIndex;
  /* 0x8e58 */ struct _KCORE_CONTROL_BLOCK* CoreControlBlock;
  /* 0x8e60 */ unsigned __int64 CoreProcessorSet;
  /* 0x8e68 */ unsigned __int64 ScanSiblingMask;
  /* 0x8e70 */ unsigned __int64 LLCMask;
  /* 0x8e78 */ unsigned __int64 GroupModuleProcessorSet;
  /* 0x8e80 */ struct _KTHREAD* SmtIsolationThread;
  /* 0x8e88 */ unsigned __int64 PrcbPad97[2];
  /* 0x8e98 */ struct _PROCESSOR_PROFILE_CONTROL_AREA* ProcessorProfileControlArea;
  /* 0x8ea0 */ void* ProfileEventIndexAddress;
  /* 0x8ea8 */ void** DpcWatchdogProfile;
  /* 0x8eb0 */ void** DpcWatchdogProfileCurrentEmptyCapture;
  /* 0x8eb8 */ void* SchedulerAssist;
  /* 0x8ec0 */ struct _SYNCH_COUNTERS SynchCounters;
  /* 0x8f78 */ unsigned __int64 PrcbPad94;
  /* 0x8f80 */ struct _FILESYSTEM_DISK_COUNTERS FsCounters;
  /* 0x8f90 */ unsigned char VendorString[13];
  /* 0x8f9d */ unsigned char PrcbPad100[3];
  /* 0x8fa0 */ unsigned __int64 FeatureBits;
  /* 0x8fa8 */ union _LARGE_INTEGER UpdateSignature;
  /* 0x8fb0 */ unsigned __int64 PteBitCache;
  /* 0x8fb8 */ unsigned long PteBitOffset;
  /* 0x8fbc */ unsigned long PrcbPad105;
  /* 0x8fc0 */ struct _CONTEXT* Context;
  /* 0x8fc8 */ unsigned long ContextFlagsInit;
  /* 0x8fcc */ unsigned long PrcbPad115;
  /* 0x8fd0 */ struct _XSAVE_AREA* ExtendedState;
  /* 0x8fd8 */ void* IsrStack;
  /* 0x8fe0 */ struct _KENTROPY_TIMING_STATE EntropyTimingState;
  struct
  {
    /* 0x9138 */ unsigned long UpdateCycle;
    union
    {
      /* 0x913c */ short PairLocal;
      struct
      {
        /* 0x913c */ unsigned char PairLocalLow;
        struct /* bitfield */
        {
          /* 0x913d */ unsigned char PairLocalForceStibp : 1; /* bit position: 0 */
          /* 0x913d */ unsigned char Reserved : 4; /* bit position: 1 */
          /* 0x913d */ unsigned char Frozen : 1; /* bit position: 5 */
          /* 0x913d */ unsigned char ForceUntrusted : 1; /* bit position: 6 */
          /* 0x913d */ unsigned char SynchIpi : 1; /* bit position: 7 */
        }; /* bitfield */
      }; /* size: 0x0002 */
    }; /* size: 0x0002 */
    union
    {
      /* 0x913e */ short PairRemote;
      struct
      {
        /* 0x913e */ unsigned char PairRemoteLow;
        /* 0x913f */ unsigned char Reserved2;
      }; /* size: 0x0002 */
    }; /* size: 0x0002 */
    /* 0x9140 */ unsigned char Trace[24];
    /* 0x9158 */ unsigned __int64 LocalDomain;
    /* 0x9160 */ unsigned __int64 RemoteDomain;
    /* 0x9168 */ struct _KTHREAD* Thread;
  } /* size: 0x0038 */ StibpPairingTrace;
  /* 0x9170 */ struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList;
  /* 0x9178 */ struct _SINGLE_LIST_ENTRY AbPropagateBoostsList;
  /* 0x9180 */ struct _KDPC AbDpc;
  /* 0x91c0 */ struct _SYMCRYPT_ENTROPY_ACCUMULATOR_STATE SymCryptEntropyAccumulatorState;
  /* 0x9340 */ struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerCurrent;
  /* 0x9394 */ struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerPrevious;
  /* 0x93e8 */ struct _KSECURE_FAULT_INFORMATION SecureFault;
  /* 0x9400 */ struct _KSHARED_READY_QUEUE* LocalSharedReadyQueue;
  /* 0x9408 */ struct _KI_COOPERATIVE_IDLE_SEARCH_CONTEXT* LocalSearchContexts[2];
  /* 0x9418 */ struct _KI_COOPERATIVE_IDLE_SEARCH_CONTEXT* SearchContexts[2];
  /* 0x9428 */ struct _KI_COOPERATIVE_IDLE_SEARCH_GENERATION* SearchGenerations[2];
  /* 0x9438 */ unsigned __int64 PrcbPad125[1];
  /* 0x9440 */ unsigned long TimerExpirationTraceCount;
  /* 0x9444 */ unsigned long PrcbPad127;
  /* 0x9448 */ struct _KTIMER_EXPIRATION_TRACE TimerExpirationTrace[16];
  /* 0x9548 */ unsigned __int64 PrcbPad128[7];
  /* 0x9580 */ struct _KCLOCK_TIMER_STATE ClockTimerState;
  /* 0x9a98 */ struct _KTRAP_FRAME* IpiFrame;
  /* 0x9aa0 */ unsigned char PrcbPad129[32];
  /* 0x9ac0 */ struct _REQUEST_MAILBOX* Mailbox;
  /* 0x9ac8 */ unsigned __int64 PrcbPad130[7];
  /* 0x9b00 */ struct _MACHINE_CHECK_CONTEXT McheckContext[2];
  /* 0x9ba0 */ unsigned __int64 TransitionShadowStack;
  /* 0x9ba8 */ unsigned __int64 KernelShadowStackInitial;
  /* 0x9bb0 */ unsigned __int64* IstShadowStacksTable;
  /* 0x9bb8 */ void* HiberSwapShadowStacks[5];
  /* 0x9be0 */ void* HiberSwapShadowStackBases[5];
  /* 0x9c08 */ void* MmFaultCompletionInfo;
  /* 0x9c10 */ unsigned __int64 PrcbPad132[6];
  /* 0x9c40 */ struct _KLOCK_QUEUE_HANDLE SelfmapLockHandle[4];
  /* 0x9ca0 */ unsigned __int64 PrcbPad134b[4];
  /* 0x9cc0 */ struct _KAFFINITY_EX DieProcessorSet;
  /* 0x9dc8 */ unsigned __int64 PrcbPad135[32];
  /* 0x9ec8 */ unsigned long CoresPerPhysicalDie;
  /* 0x9ecc */ unsigned long LogicalProcessorsPerModule;
  /* 0x9ed0 */ unsigned char PrcbPad137[64];
  /* 0x9f10 */ struct _KAFFINITY_EX ModuleProcessorSet;
  /* 0xa018 */ unsigned __int64 PrcbPad136[32];
  /* 0xa118 */ struct _KCORE_CONTROL_BLOCK LocalCoreControlBlock;
  /* 0xa148 */ unsigned __int64 PrcbPad137a;
  /* 0xa150 */ struct _KDPC KstackFreeDpc;
  /* 0xa190 */ struct _KDPC SlistRollbackDpc;
  /* 0xa1d0 */ union _SLIST_HEADER KstackFreeList;
  /* 0xa1e0 */ unsigned long IsrStackNesting;
  /* 0xa1e4 */ unsigned char PrcbPad138[3228];
  /* 0xae80 */ unsigned __int64 KernelDirectoryTableBase;
  /* 0xae88 */ unsigned __int64 RspBaseShadow;
  /* 0xae90 */ unsigned __int64 UserRspShadow;
  /* 0xae98 */ unsigned long ShadowFlags;
  /* 0xae9c */ unsigned long PrcbPad138b;
  /* 0xaea0 */ unsigned __int64 PrcbPad138c;
  /* 0xaea8 */ unsigned short PrcbPad138d;
  /* 0xaeaa */ unsigned short VerwSelector;
  /* 0xaeac */ unsigned long DbgMceNestingLevel;
  /* 0xaeb0 */ unsigned long DbgMceFlags;
  /* 0xaeb4 */ unsigned long CoreControlBlockIndex;
  /* 0xaeb8 */ struct _KCORE_CONTROL_BLOCK_SHADOW* CoreControlBlockShadow;
  /* 0xaec0 */ struct _KCORE_CONTROL_BLOCK_SHADOW LocalCoreControlBlockShadow;
  /* 0xaf00 */ struct _KAFFINITY_EX CacheProcessorSet[5];
  /* 0xb428 */ unsigned __int64 PrcbPad139[160];
  /* 0xb928 */ unsigned __int64 PrcbPad140[171];
  /* 0xbe80 */ unsigned __int64 PrcbPad140a[8];
  /* 0xbec0 */ unsigned __int64 PrcbPad141[512];
  /* 0xcec0 */ struct _REQUEST_MAILBOX RequestMailbox[1];
} KPRCB, *PKPRCB; /* size: 0xcf00 */

typedef struct _KPCR
{
  union
  {
    /* 0x0000 */ struct _NT_TIB NtTib;
    struct
    {
      /* 0x0000 */ union _KGDTENTRY64* GdtBase;
      /* 0x0008 */ struct _KTSS64* TssBase;
      /* 0x0010 */ unsigned __int64 UserRsp;
      /* 0x0018 */ struct _KPCR* Self;
      /* 0x0020 */ struct _KPRCB* CurrentPrcb;
      /* 0x0028 */ struct _KSPIN_LOCK_QUEUE* LockArray;
      /* 0x0030 */ void* Used_Self;
    }; /* size: 0x0038 */
  }; /* size: 0x0038 */
  /* 0x0038 */ union _KIDTENTRY64* IdtBase;
  /* 0x0040 */ unsigned __int64 Unused[2];
  /* 0x0050 */ unsigned char Irql;
  /* 0x0051 */ unsigned char SecondLevelCacheAssociativity;
  /* 0x0052 */ unsigned char ObsoleteNumber;
  /* 0x0053 */ unsigned char Fill0;
  /* 0x0054 */ unsigned long Unused0[3];
  /* 0x0060 */ unsigned short MajorVersion;
  /* 0x0062 */ unsigned short MinorVersion;
  /* 0x0064 */ unsigned long StallScaleFactor;
  /* 0x0068 */ void* Unused1[3];
  /* 0x0080 */ unsigned long KernelReserved[15];
  /* 0x00bc */ unsigned long SecondLevelCacheSize;
  /* 0x00c0 */ unsigned long HalReserved[16];
  /* 0x0100 */ unsigned long Unused2;
  /* 0x0108 */ void* KdVersionBlock;
  /* 0x0110 */ void* Unused3;
  /* 0x0118 */ unsigned long PcrAlign1[24];
  /* 0x0180 */ struct _KPRCB Prcb;
} KPCR, *PKPCR; /* size: 0xd080 */

