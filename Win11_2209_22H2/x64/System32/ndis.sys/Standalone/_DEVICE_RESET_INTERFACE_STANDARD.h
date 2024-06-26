typedef struct _DEVICE_RESET_INTERFACE_STANDARD
{
  /* 0x0000 */ unsigned short Size;
  /* 0x0002 */ unsigned short Version;
  /* 0x0008 */ void* Context;
  /* 0x0010 */ void* InterfaceReference /* function */;
  /* 0x0018 */ void* InterfaceDereference /* function */;
  /* 0x0020 */ void* DeviceReset /* function */;
  /* 0x0028 */ unsigned long SupportedResetTypes;
  /* 0x0030 */ void* Reserved;
  /* 0x0038 */ void* QueryBusSpecificResetInfo /* function */;
  /* 0x0040 */ void* DeviceBusSpecificReset /* function */;
  /* 0x0048 */ void* GetDeviceResetStatus /* function */;
} DEVICE_RESET_INTERFACE_STANDARD, *PDEVICE_RESET_INTERFACE_STANDARD; /* size: 0x0050 */

