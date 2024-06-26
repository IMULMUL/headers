typedef enum _RTLP_HP_ADDRESS_SPACE_TYPE
{
  HeapAddressUser = 0,
  HeapAddressKernel = 1,
  HeapAddressSession = 2,
  HeapAddressSecure = 3,
  HeapAddressTypeMax = 4,
} RTLP_HP_ADDRESS_SPACE_TYPE, *PRTLP_HP_ADDRESS_SPACE_TYPE;

typedef struct _RTL_CSPARSE_BITMAP
{
  /* 0x0000 */ unsigned __int64* CommitBitmap;
  /* 0x0008 */ unsigned __int64* UserBitmap;
  /* 0x0010 */ unsigned __int64 BitCount;
  /* 0x0018 */ unsigned __int64 BitmapLock;
  /* 0x0020 */ unsigned __int64 DecommitPageIndex;
  /* 0x0028 */ unsigned __int64 RtlpCSparseBitmapWakeLock;
  /* 0x0030 */ unsigned char LockType;
  /* 0x0031 */ unsigned char AddressSpace;
  /* 0x0032 */ unsigned char MemType;
  /* 0x0033 */ unsigned char AllocAlignment;
  /* 0x0034 */ unsigned long CommitDirectoryMaxSize;
  /* 0x0038 */ unsigned __int64 CommitDirectory[1];
} RTL_CSPARSE_BITMAP, *PRTL_CSPARSE_BITMAP; /* size: 0x0040 */

typedef struct _RTL_SPARSE_ARRAY
{
  /* 0x0000 */ unsigned __int64 ElementCount;
  /* 0x0008 */ unsigned long ElementSizeShift;
  /* 0x0010 */ struct _RTL_CSPARSE_BITMAP Bitmap;
} RTL_SPARSE_ARRAY, *PRTL_SPARSE_ARRAY; /* size: 0x0050 */

typedef struct _HEAP_VAMGR_VASPACE
{
  /* 0x0000 */ enum _RTLP_HP_ADDRESS_SPACE_TYPE AddressSpaceType;
  /* 0x0008 */ unsigned __int64 BaseAddress;
  union
  {
    /* 0x0010 */ struct _RTL_SPARSE_ARRAY VaRangeArray;
    /* 0x0010 */ unsigned char VaRangeArrayBuffer[2128];
  }; /* size: 0x0850 */
} HEAP_VAMGR_VASPACE, *PHEAP_VAMGR_VASPACE; /* size: 0x0860 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0008 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0008 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef struct _HEAP_VAMGR_ALLOCATOR
{
  /* 0x0000 */ unsigned __int64 TreeLock;
  /* 0x0008 */ struct _RTL_RB_TREE FreeRanges;
  /* 0x0018 */ struct _HEAP_VAMGR_VASPACE* VaSpace;
  /* 0x0020 */ void* ContextHandle;
  /* 0x0028 */ unsigned short ChunksPerRegion;
  /* 0x002a */ unsigned short RefCount;
  /* 0x002c */ unsigned char AllocatorIndex;
  /* 0x002d */ unsigned char NumaNode;
  struct /* bitfield */
  {
    /* 0x002e */ unsigned char LockType : 1; /* bit position: 0 */
    /* 0x002e */ unsigned char MemoryType : 3; /* bit position: 1 */
    /* 0x002e */ unsigned char ConstrainedVA : 1; /* bit position: 4 */
    /* 0x002e */ unsigned char AllowFreeHead : 1; /* bit position: 5 */
    /* 0x002e */ unsigned char Spare0 : 2; /* bit position: 6 */
  }; /* bitfield */
  /* 0x002f */ unsigned char Spare1;
} HEAP_VAMGR_ALLOCATOR, *PHEAP_VAMGR_ALLOCATOR; /* size: 0x0030 */

typedef struct _HEAP_VAMGR_CTX
{
  /* 0x0000 */ struct _HEAP_VAMGR_VASPACE VaSpace;
  /* 0x0860 */ unsigned __int64 AllocatorLock;
  /* 0x0868 */ unsigned long AllocatorCount;
  /* 0x0870 */ struct _HEAP_VAMGR_ALLOCATOR Allocators[255];
} HEAP_VAMGR_CTX, *PHEAP_VAMGR_CTX; /* size: 0x3840 */

