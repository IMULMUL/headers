enum PO_WAKE_SOURCE_TYPE
{
  DeviceWakeSourceType = 0,
  FixedWakeSourceType = 1,
  TimerWakeSourceType = 2,
  TimerPresumedWakeSourceType = 3,
  InternalWakeSourceType = 4,
};

typedef struct _PO_WAKE_SOURCE_HEADER
{
  /* 0x0000 */ enum PO_WAKE_SOURCE_TYPE Type;
  /* 0x0004 */ unsigned long Size;
} PO_WAKE_SOURCE_HEADER, *PPO_WAKE_SOURCE_HEADER; /* size: 0x0008 */

typedef enum _REQUESTER_TYPE
{
  KernelRequester = 0,
  UserProcessRequester = 1,
  UserSharedServiceRequester = 2,
} REQUESTER_TYPE, *PREQUESTER_TYPE;

typedef struct _DIAGNOSTIC_BUFFER
{
  /* 0x0000 */ unsigned __int64 Size;
  /* 0x0008 */ enum _REQUESTER_TYPE CallerType;
  union
  {
    struct
    {
      /* 0x0010 */ unsigned __int64 ProcessImageNameOffset;
      /* 0x0018 */ unsigned long ProcessId;
      /* 0x001c */ unsigned long ServiceTag;
    }; /* size: 0x0010 */
    struct
    {
      /* 0x0010 */ unsigned __int64 DeviceDescriptionOffset;
      /* 0x0018 */ unsigned __int64 DevicePathOffset;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x0020 */ unsigned __int64 ReasonOffset;
} DIAGNOSTIC_BUFFER, *PDIAGNOSTIC_BUFFER; /* size: 0x0028 */

typedef struct _PO_WAKE_SOURCE_TIMER
{
  /* 0x0000 */ struct _PO_WAKE_SOURCE_HEADER Header;
  /* 0x0008 */ struct _DIAGNOSTIC_BUFFER Reason;
} PO_WAKE_SOURCE_TIMER, *PPO_WAKE_SOURCE_TIMER; /* size: 0x0030 */

