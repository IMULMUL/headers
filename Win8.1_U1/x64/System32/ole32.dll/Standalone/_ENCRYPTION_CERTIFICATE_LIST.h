typedef struct _ENCRYPTION_CERTIFICATE_LIST
{
  /* 0x0000 */ unsigned long nUsers;
  /* 0x0008 */ struct _ENCRYPTION_CERTIFICATE** pUsers;
} ENCRYPTION_CERTIFICATE_LIST, *PENCRYPTION_CERTIFICATE_LIST; /* size: 0x0010 */

