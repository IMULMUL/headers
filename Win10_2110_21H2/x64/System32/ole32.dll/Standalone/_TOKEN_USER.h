typedef struct _SID_AND_ATTRIBUTES
{
  /* 0x0000 */ void* Sid;
  /* 0x0008 */ unsigned long Attributes;
  /* 0x000c */ long __PADDING__[1];
} SID_AND_ATTRIBUTES, *PSID_AND_ATTRIBUTES; /* size: 0x0010 */

typedef struct _TOKEN_USER
{
  /* 0x0000 */ struct _SID_AND_ATTRIBUTES User;
} TOKEN_USER, *PTOKEN_USER; /* size: 0x0010 */

