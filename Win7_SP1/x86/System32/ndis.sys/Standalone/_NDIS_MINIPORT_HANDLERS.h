typedef struct _NDIS_MINIPORT_HANDLERS
{
  /* 0x0000 */ void* RequestContext;
  /* 0x0004 */ void* CancelSendContext;
  /* 0x0008 */ void* IndicateNetBufferListsContext;
  /* 0x000c */ void* IndicateNetBufferListsObject;
  /* 0x0010 */ void* SaveIndicateNetBufferListsContext;
  /* 0x0014 */ void* ReturnNetBufferListsContext;
  /* 0x0018 */ void* ReturnNetBufferListsObject;
  /* 0x001c */ void* SendNetBufferListsContext;
  /* 0x0020 */ void* SendNetBufferListsObject;
  /* 0x0024 */ void* SendNetBufferListsCompleteContext;
  /* 0x0028 */ void* SendNetBufferListsCompleteObject;
  /* 0x002c */ void* RequestHandle;
  /* 0x0030 */ void* StatusHandle;
  /* 0x0034 */ void* DevicePnPEventNotifyHandle;
  /* 0x0038 */ void* NetPnPEventHandle;
  union
  {
    /* 0x003c */ void* CancelSendHandler /* function */;
    /* 0x003c */ void* CancelSendPacketsHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x0040 */ void* SendNetBufferListsCompleteHandler /* function */;
  /* 0x0044 */ void* IndicateNetBufferListsHandler /* function */;
  /* 0x0048 */ void* SaveIndicateNetBufferListsHandler /* function */;
  /* 0x004c */ void* ReturnNetBufferListsHandler /* function */;
  /* 0x0050 */ void* SendNetBufferListsHandler /* function */;
  /* 0x0054 */ void* DirectRequestHandle;
} NDIS_MINIPORT_HANDLERS, *PNDIS_MINIPORT_HANDLERS; /* size: 0x0058 */

