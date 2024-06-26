typedef enum _NT_IORING_REG_FILES_REQ_FLAGS
{
  NT_IORING_REG_FILES_REQ_FLAG_NONE = 0,
} NT_IORING_REG_FILES_REQ_FLAGS, *PNT_IORING_REG_FILES_REQ_FLAGS;

typedef enum _NT_IORING_REG_FILES_ADV_FLAGS
{
  NT_IORING_REG_FILES_ADV_FLAG_NONE = 0,
} NT_IORING_REG_FILES_ADV_FLAGS, *PNT_IORING_REG_FILES_ADV_FLAGS;

typedef struct _NT_IORING_REG_FILES_FLAGS
{
  /* 0x0000 */ enum _NT_IORING_REG_FILES_REQ_FLAGS Required;
  /* 0x0004 */ enum _NT_IORING_REG_FILES_ADV_FLAGS Advisory;
} NT_IORING_REG_FILES_FLAGS, *PNT_IORING_REG_FILES_FLAGS; /* size: 0x0008 */

