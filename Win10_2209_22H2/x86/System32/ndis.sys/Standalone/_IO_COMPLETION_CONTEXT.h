typedef struct _IO_COMPLETION_CONTEXT
{
  /* 0x0000 */ void* Port;
  /* 0x0004 */ void* Key;
  /* 0x0008 */ long UsageCount;
} IO_COMPLETION_CONTEXT, *PIO_COMPLETION_CONTEXT; /* size: 0x000c */

