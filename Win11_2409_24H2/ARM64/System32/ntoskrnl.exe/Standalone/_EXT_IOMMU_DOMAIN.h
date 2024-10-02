typedef enum _EXT_IOMMU_DOMAIN_TYPE
{
  ExtIommuDomainTypeS1 = 0,
  ExtIommuDomainTypeS2 = 1,
  ExtIommuDomainTypeInvalid = 2,
} EXT_IOMMU_DOMAIN_TYPE, *PEXT_IOMMU_DOMAIN_TYPE;

typedef enum _EXT_IOMMU_TRANSLATION_TYPE
{
  ExtTranslationTypePassThrough = 0,
  ExtTranslationTypeBlocked = 1,
  ExtTranslationTypeTranslate = 2,
  ExtTranslationTypeInvalid = 3,
} EXT_IOMMU_TRANSLATION_TYPE, *PEXT_IOMMU_TRANSLATION_TYPE;

typedef struct _EXT_IOMMU_S1_ARM64_DOMAIN_SETTINGS
{
  struct
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char EnableTranslation : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char Reserved : 7; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0001 */ Flags;
  /* 0x0004 */ unsigned int Mair0;
  /* 0x0008 */ unsigned int Mair1;
  /* 0x0010 */ unsigned __int64 PageTableRoot0;
  /* 0x0018 */ unsigned __int64 PageTableRoot1;
  /* 0x0020 */ unsigned char InputSize0;
  /* 0x0021 */ unsigned char InputSize1;
  /* 0x0024 */ unsigned int Asid;
} EXT_IOMMU_S1_ARM64_DOMAIN_SETTINGS, *PEXT_IOMMU_S1_ARM64_DOMAIN_SETTINGS; /* size: 0x0028 */

typedef struct _EXT_IOMMU_DOMAIN_SETTINGS
{
  /* 0x0000 */ unsigned char CoherentTableWalks;
  /* 0x0001 */ unsigned char OutputSize;
  struct
  {
    struct /* bitfield */
    {
      /* 0x0002 */ unsigned char Dirty : 1; /* bit position: 0 */
      /* 0x0002 */ unsigned char Accessed : 1; /* bit position: 1 */
      /* 0x0002 */ unsigned char Reserved0 : 6; /* bit position: 2 */
    }; /* bitfield */
  } /* size: 0x0001 */ Httu;
  /* 0x0008 */ struct _EXT_IOMMU_S1_ARM64_DOMAIN_SETTINGS S1;
  struct
  {
    /* 0x0030 */ unsigned char PageTableRootLevel;
    /* 0x0031 */ unsigned char InputSize;
    /* 0x0038 */ unsigned __int64 PageTableRoot;
  } /* size: 0x0010 */ S2;
} EXT_IOMMU_DOMAIN_SETTINGS, *PEXT_IOMMU_DOMAIN_SETTINGS; /* size: 0x0040 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _EXT_ENV_SPINLOCK
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ unsigned __int64 Lock;
  /* 0x0018 */ unsigned char OldIrql;
  /* 0x0019 */ char __PADDING__[7];
} EXT_ENV_SPINLOCK, *PEXT_ENV_SPINLOCK; /* size: 0x0020 */

typedef union _EXT_IOMMU_QC_PREFETCH_SETTINGS
{
  union
  {
    /* 0x0000 */ unsigned char AsUINT8;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned char OverridePrefetchSettings : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned char Cpre : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned char DeepPrefetchLength : 2; /* bit position: 2 */
    }; /* bitfield */
  }; /* size: 0x0001 */
} EXT_IOMMU_QC_PREFETCH_SETTINGS, *PEXT_IOMMU_QC_PREFETCH_SETTINGS; /* size: 0x0001 */

typedef union _EXT_IOMMU_QC_SID_IMPL_DEFINED_REGISTERS
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned short Impl0;
      /* 0x0002 */ unsigned short Impl1;
      /* 0x0004 */ unsigned short Impl2;
    }; /* size: 0x0006 */
    /* 0x0000 */ unsigned short AsUINT16[3];
  }; /* size: 0x0006 */
} EXT_IOMMU_QC_SID_IMPL_DEFINED_REGISTERS, *PEXT_IOMMU_QC_SID_IMPL_DEFINED_REGISTERS; /* size: 0x0006 */

typedef struct _EXT_IOMMU_DOMAIN
{
  /* 0x0000 */ enum _EXT_IOMMU_DOMAIN_TYPE DomainType;
  /* 0x0004 */ enum _EXT_IOMMU_TRANSLATION_TYPE TranslationType;
  struct
  {
    struct /* bitfield */
    {
      /* 0x0008 */ unsigned char DefaultDomain : 1; /* bit position: 0 */
      /* 0x0008 */ unsigned char FirmwareDomain : 1; /* bit position: 1 */
    }; /* bitfield */
  } /* size: 0x0001 */ Flags;
  /* 0x000a */ unsigned short FirmwareDomainId;
  /* 0x000c */ unsigned int Vmid;
  /* 0x0010 */ struct _EXT_IOMMU_DOMAIN_SETTINGS Settings;
  /* 0x0050 */ unsigned int ContextId;
  /* 0x0054 */ unsigned int DeviceCount;
  /* 0x0058 */ struct _LIST_ENTRY Devices;
  /* 0x0068 */ struct _EXT_ENV_SPINLOCK Lock;
  /* 0x0088 */ struct _EXT_IOMMU_DOMAIN* S2Domain;
  union
  {
    /* 0x0090 */ unsigned char FixedCb;
    /* 0x0090 */ unsigned __int64 DomainFlags;
  }; /* size: 0x0008 */
  /* 0x0098 */ unsigned int MemoryAccessWidth;
  union
  {
    /* 0x009c */ union _EXT_IOMMU_QC_PREFETCH_SETTINGS PrefetchSettings;
    /* 0x009c */ union _EXT_IOMMU_QC_SID_IMPL_DEFINED_REGISTERS ImplDefinedRegisters;
  }; /* size: 0x0006 */
  /* 0x00a8 */ void* DomainContext;
} EXT_IOMMU_DOMAIN, *PEXT_IOMMU_DOMAIN; /* size: 0x00b0 */

