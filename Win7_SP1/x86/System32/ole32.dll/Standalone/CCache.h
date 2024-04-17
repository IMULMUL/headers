typedef struct _RTL_SRWLOCK
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
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0004 */

class CCache
{
  /* 0x0000 */ struct _RTL_SRWLOCK m_srwLock;
  /* 0x0004 */ struct tagElement** m_paBuckets;
  /* 0x0008 */ unsigned long m_cBuckets;
  /* 0x000c */ unsigned long m_cElements;
  /* 0x0010 */ __int64 m_i64LocalCacheCount;
}; /* size: 0x0018 */

