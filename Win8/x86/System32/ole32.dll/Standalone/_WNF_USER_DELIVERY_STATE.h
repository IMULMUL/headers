typedef enum _WNF_USER_DELIVERY_STATE
{
  WNF_USER_DELIVERY_STATE_READY = 0,
  WNF_USER_DELIVERY_STATE_CANCELLED = 1,
  WNF_USER_DELIVERY_STATE_IN_PROGRESS = 2,
  WNF_USER_DELIVERY_STATE_SUCCEEDED = 3,
  WNF_USER_DELIVERY_STATE_FAILED = 4,
  WNF_USER_DELIVERY_STATE_REQUIRES_RETRY = 5,
  WNF_USER_DELIVERY_STATE_COMPLETE = 6,
} WNF_USER_DELIVERY_STATE, *PWNF_USER_DELIVERY_STATE;

