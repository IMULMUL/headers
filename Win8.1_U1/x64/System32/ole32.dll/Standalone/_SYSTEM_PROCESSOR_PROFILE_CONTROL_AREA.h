typedef struct _SYSTEM_PROCESSOR_PROFILE_CONTROL_AREA
{
  /* 0x0000 */ struct _PROCESSOR_PROFILE_CONTROL_AREA* ProcessorProfileControlArea;
  /* 0x0008 */ unsigned char Allocate;
  /* 0x0009 */ char __PADDING__[7];
} SYSTEM_PROCESSOR_PROFILE_CONTROL_AREA, *PSYSTEM_PROCESSOR_PROFILE_CONTROL_AREA; /* size: 0x0010 */

