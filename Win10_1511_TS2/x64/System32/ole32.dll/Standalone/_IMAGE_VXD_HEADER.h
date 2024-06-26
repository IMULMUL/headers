typedef struct _IMAGE_VXD_HEADER
{
  /* 0x0000 */ unsigned short e32_magic;
  /* 0x0002 */ unsigned char e32_border;
  /* 0x0003 */ unsigned char e32_worder;
  /* 0x0004 */ unsigned long e32_level;
  /* 0x0008 */ unsigned short e32_cpu;
  /* 0x000a */ unsigned short e32_os;
  /* 0x000c */ unsigned long e32_ver;
  /* 0x0010 */ unsigned long e32_mflags;
  /* 0x0014 */ unsigned long e32_mpages;
  /* 0x0018 */ unsigned long e32_startobj;
  /* 0x001c */ unsigned long e32_eip;
  /* 0x0020 */ unsigned long e32_stackobj;
  /* 0x0024 */ unsigned long e32_esp;
  /* 0x0028 */ unsigned long e32_pagesize;
  /* 0x002c */ unsigned long e32_lastpagesize;
  /* 0x0030 */ unsigned long e32_fixupsize;
  /* 0x0034 */ unsigned long e32_fixupsum;
  /* 0x0038 */ unsigned long e32_ldrsize;
  /* 0x003c */ unsigned long e32_ldrsum;
  /* 0x0040 */ unsigned long e32_objtab;
  /* 0x0044 */ unsigned long e32_objcnt;
  /* 0x0048 */ unsigned long e32_objmap;
  /* 0x004c */ unsigned long e32_itermap;
  /* 0x0050 */ unsigned long e32_rsrctab;
  /* 0x0054 */ unsigned long e32_rsrccnt;
  /* 0x0058 */ unsigned long e32_restab;
  /* 0x005c */ unsigned long e32_enttab;
  /* 0x0060 */ unsigned long e32_dirtab;
  /* 0x0064 */ unsigned long e32_dircnt;
  /* 0x0068 */ unsigned long e32_fpagetab;
  /* 0x006c */ unsigned long e32_frectab;
  /* 0x0070 */ unsigned long e32_impmod;
  /* 0x0074 */ unsigned long e32_impmodcnt;
  /* 0x0078 */ unsigned long e32_impproc;
  /* 0x007c */ unsigned long e32_pagesum;
  /* 0x0080 */ unsigned long e32_datapage;
  /* 0x0084 */ unsigned long e32_preload;
  /* 0x0088 */ unsigned long e32_nrestab;
  /* 0x008c */ unsigned long e32_cbnrestab;
  /* 0x0090 */ unsigned long e32_nressum;
  /* 0x0094 */ unsigned long e32_autodata;
  /* 0x0098 */ unsigned long e32_debuginfo;
  /* 0x009c */ unsigned long e32_debuglen;
  /* 0x00a0 */ unsigned long e32_instpreload;
  /* 0x00a4 */ unsigned long e32_instdemand;
  /* 0x00a8 */ unsigned long e32_heapsize;
  /* 0x00ac */ unsigned char e32_res3[12];
  /* 0x00b8 */ unsigned long e32_winresoff;
  /* 0x00bc */ unsigned long e32_winreslen;
  /* 0x00c0 */ unsigned short e32_devid;
  /* 0x00c2 */ unsigned short e32_ddkver;
} IMAGE_VXD_HEADER, *PIMAGE_VXD_HEADER; /* size: 0x00c4 */

