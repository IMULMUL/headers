enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

enum wil::FeatureChangeTime
{
  OnRead = 0,
  OnReload = 1,
  OnReboot = 3,
};

typedef struct __WilFeatureTraits_Feature_FidoHybridProtocolPasskeys
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy124;
    /* 0x0000 */ const char ___dummy116;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy117;
    /* 0x0000 */ const char ___dummy118;
    /* 0x0000 */ const char ___dummy119;
    /* 0x0000 */ const char ___dummy120;
    /* 0x0000 */ const char ___dummy121;
    /* 0x0000 */ const char ___dummy122;
    /* 0x0000 */ const char ___dummy123;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_FidoHybridProtocolPasskeys, *P_WilFeatureTraits_Feature_FidoHybridProtocolPasskeys; /* size: 0x0001 */

