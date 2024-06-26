enum POWER_MONITOR_REQUEST_REASON
{
  MonitorRequestReasonUnknown = 0,
  MonitorRequestReasonPowerButton = 1,
  MonitorRequestReasonRemoteConnection = 2,
  MonitorRequestReasonScMonitorpower = 3,
  MonitorRequestReasonUserInput = 4,
  MonitorRequestReasonAcDcDisplayBurst = 5,
  MonitorRequestReasonUserDisplayBurst = 6,
  MonitorRequestReasonPoSetSystemState = 7,
  MonitorRequestReasonSetThreadExecutionState = 8,
  MonitorRequestReasonFullWake = 9,
  MonitorRequestReasonSessionUnlock = 10,
  MonitorRequestReasonScreenOffRequest = 11,
  MonitorRequestReasonIdleTimeout = 12,
  MonitorRequestReasonPolicyChange = 13,
  MonitorRequestReasonSleepButton = 14,
  MonitorRequestReasonLid = 15,
  MonitorRequestReasonBatteryCountChange = 16,
  MonitorRequestReasonGracePeriod = 17,
  MonitorRequestReasonPnP = 18,
  MonitorRequestReasonDP = 19,
  MonitorRequestReasonSxTransition = 20,
  MonitorRequestReasonSystemIdle = 21,
  MonitorRequestReasonNearProximity = 22,
  MonitorRequestReasonThermalStandby = 23,
  MonitorRequestReasonResumePdc = 24,
  MonitorRequestReasonResumeS4 = 25,
  MonitorRequestReasonTerminal = 26,
  MonitorRequestReasonPdcSignal = 27,
  MonitorRequestReasonAcDcDisplayBurstSuppressed = 28,
  MonitorRequestReasonSystemStateEntered = 29,
  MonitorRequestReasonWinrt = 30,
  MonitorRequestReasonUserInputKeyboard = 31,
  MonitorRequestReasonUserInputMouse = 32,
  MonitorRequestReasonUserInputTouch = 33,
  MonitorRequestReasonUserInputPen = 34,
  MonitorRequestReasonUserInputAccelerometer = 35,
  MonitorRequestReasonUserInputHid = 36,
  MonitorRequestReasonUserInputPoUserPresent = 37,
  MonitorRequestReasonUserInputSessionSwitch = 38,
  MonitorRequestReasonUserInputInitialization = 39,
  MonitorRequestReasonPdcSignalWindowsMobilePwrNotif = 40,
  MonitorRequestReasonPdcSignalWindowsMobileShell = 41,
  MonitorRequestReasonPdcSignalHeyCortana = 42,
  MonitorRequestReasonPdcSignalHolographicShell = 43,
  MonitorRequestReasonPdcSignalFingerprint = 44,
  MonitorRequestReasonMax = 45,
};

typedef struct _POWER_MONITOR_INVOCATION
{
  /* 0x0000 */ unsigned char Console;
  /* 0x0004 */ enum POWER_MONITOR_REQUEST_REASON RequestReason;
} POWER_MONITOR_INVOCATION, *PPOWER_MONITOR_INVOCATION; /* size: 0x0008 */

