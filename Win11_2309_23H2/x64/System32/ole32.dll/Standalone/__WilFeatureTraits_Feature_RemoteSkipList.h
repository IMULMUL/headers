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

typedef struct __WilFeatureTraits_Feature_RemoteSkipList
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy81;
    /* 0x0000 */ const char ___dummy75;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy76;
    /* 0x0000 */ const char ___dummy77;
    /* 0x0000 */ const char ___dummy78;
    /* 0x0000 */ const char ___dummy79;
    /* 0x0000 */ const char ___dummy80;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_RemoteSkipList, *P_WilFeatureTraits_Feature_RemoteSkipList; /* size: 0x0001 */

