typedef enum _LCN_WEAK_REFERENCE_STATE
{
  LCN_WEAK_REFERENCE_VALID = 1,
  LCN_WEAK_REFERENCE_BROKEN = 2,
  LCN_CHECKSUM_VALID = 4,
  LCN_IS_VALID = 8,
  LCN_IS_STREAM_RESERVED = 16,
  LCN_IS_READ_ONLY = 32,
} LCN_WEAK_REFERENCE_STATE, *PLCN_WEAK_REFERENCE_STATE;

