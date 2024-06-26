typedef struct _SYSTEM_PROCESSOR_PERFORMANCE_HITCOUNT
{
  /* 0x0000 */ unsigned __int64 Hits;
  /* 0x0008 */ unsigned char PercentFrequency;
  /* 0x0009 */ char __PADDING__[7];
} SYSTEM_PROCESSOR_PERFORMANCE_HITCOUNT, *PSYSTEM_PROCESSOR_PERFORMANCE_HITCOUNT; /* size: 0x0010 */

typedef struct _SYSTEM_PROCESSOR_PERFORMANCE_STATE_DISTRIBUTION
{
  /* 0x0000 */ unsigned long ProcessorNumber;
  /* 0x0004 */ unsigned long StateCount;
  /* 0x0008 */ struct _SYSTEM_PROCESSOR_PERFORMANCE_HITCOUNT States[1];
} SYSTEM_PROCESSOR_PERFORMANCE_STATE_DISTRIBUTION, *PSYSTEM_PROCESSOR_PERFORMANCE_STATE_DISTRIBUTION; /* size: 0x0018 */

