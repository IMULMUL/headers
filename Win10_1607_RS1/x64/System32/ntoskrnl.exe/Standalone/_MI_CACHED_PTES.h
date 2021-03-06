typedef struct _MI_CACHED_PTE
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long GlobalTimeStamp;
      /* 0x0004 */ unsigned long PteIndex;
    }; /* size: 0x0008 */
    /* 0x0000 */ __int64 Long;
  }; /* size: 0x0008 */
} MI_CACHED_PTE, *PMI_CACHED_PTE; /* size: 0x0008 */

typedef struct _MI_CACHED_PTES
{
  /* 0x0000 */ struct _MI_CACHED_PTE Bins[8];
  /* 0x0040 */ long CachedPteCount;
  /* 0x0044 */ long __PADDING__[1];
} MI_CACHED_PTES, *PMI_CACHED_PTES; /* size: 0x0048 */

