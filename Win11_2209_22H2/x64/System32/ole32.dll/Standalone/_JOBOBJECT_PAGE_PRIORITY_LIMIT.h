typedef enum _JOBOBJECT_PAGE_PRIORITY_LIMIT_FLAGS
{
  JOBOBJECT_PAGE_PRIORITY_LIMIT_ENABLE = 1,
  JOBOBJECT_PAGE_PRIORITY_LIMIT_VALID_FLAGS = 1,
} JOBOBJECT_PAGE_PRIORITY_LIMIT_FLAGS, *PJOBOBJECT_PAGE_PRIORITY_LIMIT_FLAGS;

typedef struct _JOBOBJECT_PAGE_PRIORITY_LIMIT
{
  /* 0x0000 */ enum _JOBOBJECT_PAGE_PRIORITY_LIMIT_FLAGS Flags;
  /* 0x0004 */ unsigned long Priority;
} JOBOBJECT_PAGE_PRIORITY_LIMIT, *PJOBOBJECT_PAGE_PRIORITY_LIMIT; /* size: 0x0008 */

