typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _PO_HIBER_PERF
{
  /* 0x0000 */ unsigned __int64 HiberIoTicks;
  /* 0x0008 */ unsigned __int64 HiberIoCpuTicks;
  /* 0x0010 */ unsigned __int64 HiberInitTicks;
  /* 0x0018 */ unsigned __int64 HiberHiberFileTicks;
  /* 0x0020 */ unsigned __int64 HiberCompressTicks;
  /* 0x0028 */ unsigned __int64 HiberSharedBufferTicks;
  /* 0x0030 */ unsigned __int64 HiberChecksumTicks;
  /* 0x0038 */ unsigned __int64 HiberChecksumIoTicks;
  /* 0x0040 */ union _LARGE_INTEGER TotalHibernateTime;
  /* 0x0048 */ union _LARGE_INTEGER HibernateCompleteTimestamp;
  /* 0x0050 */ unsigned long POSTTime;
  /* 0x0054 */ unsigned long ResumeBootMgrTime;
  /* 0x0058 */ unsigned long BootmgrUserInputTime;
  /* 0x0060 */ unsigned __int64 ResumeAppTicks;
  /* 0x0068 */ unsigned __int64 ResumeAppStartTimestamp;
  /* 0x0070 */ unsigned __int64 ResumeLibraryInitTicks;
  /* 0x0078 */ unsigned __int64 ResumeInitTicks;
  /* 0x0080 */ unsigned __int64 ResumeRestoreImageStartTimestamp;
  /* 0x0088 */ unsigned __int64 ResumeHiberFileTicks;
  /* 0x0090 */ unsigned __int64 ResumeIoTicks;
  /* 0x0098 */ unsigned __int64 ResumeDecompressTicks;
  /* 0x00a0 */ unsigned __int64 ResumeAllocateTicks;
  /* 0x00a8 */ unsigned __int64 ResumeUserInOutTicks;
  /* 0x00b0 */ unsigned __int64 ResumeMapTicks;
  /* 0x00b8 */ unsigned __int64 ResumeUnmapTicks;
  /* 0x00c0 */ unsigned __int64 ResumeChecksumTicks;
  /* 0x00c8 */ unsigned __int64 ResumeChecksumIoTicks;
  /* 0x00d0 */ unsigned __int64 ResumeKernelSwitchTimestamp;
  /* 0x00d8 */ unsigned __int64 CyclesPerMs;
  /* 0x00e0 */ unsigned __int64 WriteLogDataTimestamp;
  /* 0x00e8 */ unsigned __int64 KernelReturnFromHandler;
  /* 0x00f0 */ unsigned __int64 TimeStampCounterAtSwitchTime;
  /* 0x00f8 */ unsigned __int64 Reserved[2];
  /* 0x0108 */ unsigned __int64 SleeperThreadEnd;
  /* 0x0110 */ unsigned __int64 PostCmosUpdateTimestamp;
  /* 0x0118 */ unsigned __int64 KernelReturnSystemPowerStateTimestamp;
  /* 0x0120 */ unsigned __int64 IoBoundedness;
  /* 0x0128 */ unsigned __int64 KernelDecompressTicks;
  /* 0x0130 */ unsigned __int64 KernelIoTicks;
  /* 0x0138 */ unsigned __int64 KernelCopyTicks;
  /* 0x0140 */ unsigned __int64 ReadCheckCount;
  /* 0x0148 */ unsigned __int64 KernelInitTicks;
  /* 0x0150 */ unsigned __int64 KernelResumeHiberFileTicks;
  /* 0x0158 */ unsigned __int64 KernelIoCpuTicks;
  /* 0x0160 */ unsigned __int64 KernelSharedBufferTicks;
  /* 0x0168 */ unsigned __int64 KernelAnimationTicks;
  /* 0x0170 */ unsigned __int64 KernelChecksumTicks;
  /* 0x0178 */ unsigned __int64 KernelChecksumIoTicks;
  /* 0x0180 */ union _LARGE_INTEGER AnimationStart;
  /* 0x0188 */ union _LARGE_INTEGER AnimationStop;
  /* 0x0190 */ unsigned long DeviceResumeTime;
  /* 0x0198 */ unsigned __int64 SecurePagesProcessed;
  /* 0x01a0 */ unsigned __int64 BootPagesProcessed;
  /* 0x01a8 */ unsigned __int64 KernelPagesProcessed;
  /* 0x01b0 */ unsigned __int64 BootBytesWritten;
  /* 0x01b8 */ unsigned __int64 KernelBytesWritten;
  /* 0x01c0 */ unsigned __int64 BootPagesWritten;
  /* 0x01c8 */ unsigned __int64 KernelPagesWritten;
  /* 0x01d0 */ unsigned __int64 BytesWritten;
  /* 0x01d8 */ unsigned long PagesWritten;
  /* 0x01dc */ unsigned long FileRuns;
  /* 0x01e0 */ unsigned long NoMultiStageResumeReason;
  /* 0x01e4 */ unsigned long MaxHuffRatio;
  /* 0x01e8 */ unsigned __int64 AdjustedTotalResumeTime;
  /* 0x01f0 */ unsigned __int64 ResumeCompleteTimestamp;
  /* 0x01f8 */ unsigned __int64 WinresumeExitTimestamp;
  /* 0x0200 */ unsigned __int64 TcbLoaderStartTimestamp;
  /* 0x0208 */ unsigned __int64 TcbLoaderEndTimestamp;
  /* 0x0210 */ unsigned __int64 RemappedPageLookupCycles;
  /* 0x0218 */ unsigned __int64 TcbLaunchPrepareCycles;
  /* 0x0220 */ unsigned __int64 TcbLaunchPrepareDataCycles;
  /* 0x0228 */ unsigned __int64 TcbRestoreStateCycles;
  /* 0x0230 */ unsigned __int64 DecryptVsmPagesPhase0Cycles;
  /* 0x0238 */ unsigned __int64 DecryptVsmPagesPhase1Cycles;
  /* 0x0240 */ unsigned __int64 DecryptVsmPagesPhase2Cycles;
  /* 0x0248 */ unsigned __int64 TcbLoaderAuthenticateCycles;
  /* 0x0250 */ unsigned __int64 TcbLoaderDecryptCycles;
  /* 0x0258 */ unsigned __int64 TcbLoaderValidateCycles;
} PO_HIBER_PERF, *PPO_HIBER_PERF; /* size: 0x0260 */

struct PO_MEMORY_IMAGE
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long ImageType;
  /* 0x0008 */ unsigned long CheckSum;
  /* 0x000c */ unsigned long LengthSelf;
  /* 0x0010 */ unsigned __int64 PageSelf;
  /* 0x0018 */ unsigned long PageSize;
  /* 0x0020 */ union _LARGE_INTEGER SystemTime;
  /* 0x0028 */ unsigned __int64 InterruptTime;
  /* 0x0030 */ unsigned __int64 FeatureFlags;
  /* 0x0038 */ unsigned char HiberFlags;
  /* 0x0039 */ unsigned char HiberSimulateFlags;
  /* 0x003a */ unsigned char spare[2];
  /* 0x003c */ unsigned long NoHiberPtes;
  /* 0x0040 */ unsigned __int64 HiberVa;
  /* 0x0048 */ unsigned long NoFreePages;
  /* 0x004c */ unsigned long FreeMapCheck;
  /* 0x0050 */ unsigned long WakeCheck;
  /* 0x0058 */ unsigned __int64 NumPagesForLoader;
  /* 0x0060 */ unsigned __int64 FirstSecureRestorePage;
  /* 0x0068 */ unsigned __int64 FirstBootRestorePage;
  /* 0x0070 */ unsigned __int64 FirstKernelRestorePage;
  /* 0x0078 */ unsigned __int64 FirstChecksumRestorePage;
  /* 0x0080 */ unsigned __int64 NoChecksumEntries;
  /* 0x0088 */ struct _PO_HIBER_PERF PerfInfo;
  /* 0x02e8 */ unsigned long FirmwareRuntimeInformationPages;
  /* 0x02f0 */ unsigned __int64 FirmwareRuntimeInformation[1];
  /* 0x02f8 */ unsigned long SpareUlong;
  /* 0x02fc */ unsigned long NoBootLoaderLogPages;
  /* 0x0300 */ unsigned __int64 BootLoaderLogPages[24];
  /* 0x03c0 */ unsigned long NotUsed;
  /* 0x03c4 */ unsigned long ResumeContextCheck;
  /* 0x03c8 */ unsigned long ResumeContextPages;
  /* 0x03cc */ unsigned char Hiberboot;
  /* 0x03cd */ unsigned char SecureLaunched;
  /* 0x03ce */ unsigned char SecureBoot;
  /* 0x03cf */ unsigned char Fasr;
  /* 0x03d0 */ unsigned __int64 HvPageTableRoot;
  /* 0x03d8 */ unsigned __int64 HvEntryPoint;
  /* 0x03e0 */ unsigned __int64 HvReservedTransitionAddress;
  /* 0x03e8 */ unsigned __int64 HvReservedTransitionAddressSize;
  /* 0x03f0 */ unsigned __int64 BootFlags;
  /* 0x03f8 */ unsigned __int64 RestoreProcessorStateRoutine;
  /* 0x0400 */ unsigned __int64 HighestPhysicalPage;
  /* 0x0408 */ unsigned __int64 BitlockerKeyPfns[4];
  /* 0x0428 */ unsigned long HardwareSignature;
  /* 0x0430 */ union _LARGE_INTEGER SMBiosTablePhysicalAddress;
  /* 0x0438 */ unsigned long SMBiosTableLength;
  /* 0x043c */ unsigned char SMBiosMajorVersion;
  /* 0x043d */ unsigned char SMBiosMinorVersion;
  /* 0x043e */ unsigned char HiberResumeXhciHandoffSkip;
  /* 0x043f */ unsigned char InitializeUSBCore;
  /* 0x0440 */ unsigned char ValidUSBCoreId;
  /* 0x0441 */ unsigned char USBCoreId;
  /* 0x0442 */ unsigned char SkipMemoryMapValidation;
  /* 0x0443 */ unsigned char SuppressResumePrompt;
  /* 0x0444 */ long __PADDING__[1];
}; /* size: 0x0448 */

