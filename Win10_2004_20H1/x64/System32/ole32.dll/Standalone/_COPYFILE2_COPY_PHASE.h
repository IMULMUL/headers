typedef enum _COPYFILE2_COPY_PHASE
{
  COPYFILE2_PHASE_NONE = 0,
  COPYFILE2_PHASE_PREPARE_SOURCE = 1,
  COPYFILE2_PHASE_PREPARE_DEST = 2,
  COPYFILE2_PHASE_READ_SOURCE = 3,
  COPYFILE2_PHASE_WRITE_DESTINATION = 4,
  COPYFILE2_PHASE_SERVER_COPY = 5,
  COPYFILE2_PHASE_NAMEGRAFT_COPY = 6,
  COPYFILE2_PHASE_MAX = 7,
} COPYFILE2_COPY_PHASE, *PCOPYFILE2_COPY_PHASE;

