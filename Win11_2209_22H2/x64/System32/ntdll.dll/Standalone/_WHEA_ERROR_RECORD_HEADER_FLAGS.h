typedef union _WHEA_ERROR_RECORD_HEADER_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Recovered : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long PreviousError : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Simulated : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long DeviceDriver : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long CriticalEvent : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long PersistPfn : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long SectionsTruncated : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned long RecoveryInProgress : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned long Throttle : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned long Reserved : 23; /* bit position: 9 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_ERROR_RECORD_HEADER_FLAGS, *PWHEA_ERROR_RECORD_HEADER_FLAGS; /* size: 0x0004 */

