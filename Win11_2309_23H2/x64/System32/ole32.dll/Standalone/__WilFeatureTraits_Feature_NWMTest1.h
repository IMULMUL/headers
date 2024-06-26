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

typedef struct __WilFeatureTraits_Feature_NWMTest1
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy4;
    /* 0x0000 */ const char ___dummy0;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy1;
    /* 0x0000 */ const char ___dummy2;
    /* 0x0000 */ const char ___dummy3;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_NWMTest1, *P_WilFeatureTraits_Feature_NWMTest1; /* size: 0x0001 */

