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

typedef struct __WilFeatureTraits_Feature_ThemesSyncedImagesDownload
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy709;
    /* 0x0000 */ const char ___dummy703;
    /* 0x0000 */ const unsigned short version;
    /* 0x0000 */ const char ___dummy704;
    /* 0x0000 */ const char ___dummy705;
    /* 0x0000 */ enum wil::FeatureChangeTime changeTime;
    /* 0x0000 */ const char ___dummy706;
    /* 0x0000 */ const char ___dummy707;
    /* 0x0000 */ const char ___dummy708;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_ThemesSyncedImagesDownload, *P_WilFeatureTraits_Feature_ThemesSyncedImagesDownload; /* size: 0x0001 */

