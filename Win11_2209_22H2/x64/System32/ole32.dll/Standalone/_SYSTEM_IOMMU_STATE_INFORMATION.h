typedef enum _SYSTEM_IOMMU_STATE
{
  IommuStateBlock = 0,
  IommuStateUnblock = 1,
} SYSTEM_IOMMU_STATE, *PSYSTEM_IOMMU_STATE;

typedef struct _SYSTEM_IOMMU_STATE_INFORMATION
{
  /* 0x0000 */ enum _SYSTEM_IOMMU_STATE State;
  /* 0x0008 */ void* Pdo;
} SYSTEM_IOMMU_STATE_INFORMATION, *PSYSTEM_IOMMU_STATE_INFORMATION; /* size: 0x0010 */

