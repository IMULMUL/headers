typedef struct _HAL_INTEL_ENLIGHTENMENT_INFORMATION
{
  /* 0x0000 */ unsigned long Enlightenments;
  /* 0x0004 */ unsigned long HypervisorConnected;
  /* 0x0008 */ void* EndOfInterrupt /* function */;
  /* 0x0010 */ void* ApicWriteIcr /* function */;
  /* 0x0018 */ unsigned long Reserved0;
  /* 0x001c */ unsigned long SpinCountMask;
  /* 0x0020 */ void* LongSpinWait /* function */;
  /* 0x0028 */ void* GetReferenceTime /* function */;
  /* 0x0030 */ void* SetSystemSleepProperty /* function */;
  /* 0x0038 */ void* EnterSleepState /* function */;
  /* 0x0040 */ void* NotifyDebugDeviceAvailable /* function */;
  /* 0x0048 */ void* MapDeviceInterrupt /* function */;
  /* 0x0050 */ void* UnmapDeviceInterrupt /* function */;
  /* 0x0058 */ void* RetargetDeviceInterrupt /* function */;
  /* 0x0060 */ void* SetHpetConfig /* function */;
  /* 0x0068 */ void* NotifyHpetEnabled /* function */;
  /* 0x0070 */ void* QueryAssociatedProcessors /* function */;
  /* 0x0078 */ void* ReadMultipleMsr /* function */;
  /* 0x0080 */ void* WriteMultipleMsr /* function */;
  /* 0x0088 */ void* ReadCpuid /* function */;
  /* 0x0090 */ void* LpWritebackInvalidate /* function */;
  /* 0x0098 */ void* GetMachineCheckContext /* function */;
  /* 0x00a0 */ void* SuspendPartition /* function */;
  /* 0x00a8 */ void* ResumePartition /* function */;
  /* 0x00b0 */ void* SetSystemMachineCheckProperty /* function */;
  /* 0x00b8 */ void* WheaErrorNotification /* function */;
  /* 0x00c0 */ void* GetProcessorIndexFromVpIndex /* function */;
  /* 0x00c8 */ void* SyntheticClusterIpi /* function */;
  /* 0x00d0 */ void* VpStartEnabled /* function */;
  /* 0x00d8 */ void* StartVirtualProcessor /* function */;
  /* 0x00e0 */ void* GetVpIndexFromApicId /* function */;
  /* 0x00e8 */ void* IumAccessPciDevice /* function */;
  /* 0x00f0 */ void* IumEfiRuntimeService /* function */;
  /* 0x00f8 */ void* GetSystemPasidCapabilities /* function */;
  /* 0x0100 */ void* GetDeviceCapabilities /* function */;
  /* 0x0108 */ void* CreatePasidSpace /* function */;
  /* 0x0110 */ void* SetPasidAddressSpace /* function */;
  /* 0x0118 */ void* FlushPasid /* function */;
  /* 0x0120 */ void* AttachPasidSpace /* function */;
  /* 0x0128 */ void* DetachPasidSpace /* function */;
  /* 0x0130 */ void* EnablePasid /* function */;
  /* 0x0138 */ void* DisablePasid /* function */;
  /* 0x0140 */ void* AcknowledgePageRequest /* function */;
  /* 0x0148 */ void* CreatePrQueue /* function */;
  /* 0x0150 */ void* DeletePrQueue /* function */;
  /* 0x0158 */ void* ClearPrqStalled /* function */;
  /* 0x0160 */ void* SetDeviceDmaEnabled /* function */;
  /* 0x0168 */ void* SetDeviceCapabilities /* function */;
  /* 0x0170 */ void* AttachPrQueue /* function */;
  /* 0x0178 */ void* DetachPrQueue /* function */;
  /* 0x0180 */ void* HvDebuggerPowerHandler /* function */;
  /* 0x0188 */ void* SetQpcBias /* function */;
  /* 0x0190 */ void* GetQpcBias /* function */;
  /* 0x0198 */ void* RegisterDeviceId /* function */;
  /* 0x01a0 */ void* UnregisterDeviceId /* function */;
  /* 0x01a8 */ void* AllocateDeviceDomain /* function */;
  /* 0x01b0 */ void* AttachDeviceDomain /* function */;
  /* 0x01b8 */ void* DetachDeviceDomain /* function */;
  /* 0x01c0 */ void* DeleteDeviceDomain /* function */;
  /* 0x01c8 */ void* MapDeviceLogicalRange /* function */;
  /* 0x01d0 */ void* UnmapDeviceLogicalRange /* function */;
  /* 0x01d8 */ void* MapDeviceSparsePages /* function */;
  /* 0x01e0 */ void* UnmapDeviceSparsePages /* function */;
  /* 0x01e8 */ void* GetDmaGuardEnabled /* function */;
  /* 0x01f0 */ void* UpdateMicrocode /* function */;
  /* 0x01f8 */ void* GetSintMessage /* function */;
  /* 0x0200 */ void* RestoreTime /* function */;
  /* 0x0208 */ void* SetRootFaultReportingReady /* function */;
  /* 0x0210 */ void* ConfigureDeviceDomain /* function */;
  /* 0x0218 */ void* UnblockDefaultDma /* function */;
  /* 0x0220 */ void* FlushDeviceDomain /* function */;
  /* 0x0228 */ void* FlushDeviceDomainVaList /* function */;
  /* 0x0230 */ void* GetHybridPassthroughReservedRegions /* function */;
  /* 0x0238 */ void* ReserveDeviceDomainAttachment /* function */;
  /* 0x0240 */ void* UnreserveDeviceDomainAttachment /* function */;
} HAL_INTEL_ENLIGHTENMENT_INFORMATION, *PHAL_INTEL_ENLIGHTENMENT_INFORMATION; /* size: 0x0248 */

