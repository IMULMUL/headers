enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_AllowSingleViewAppsForAssignedAccess
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy402;
    /* 0x0000 */ const char ___dummy398;
    /* 0x0000 */ const char ___dummy399;
    /* 0x0000 */ const char ___dummy400;
    /* 0x0000 */ const char ___dummy401;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_AllowSingleViewAppsForAssignedAccess, *P_WilFeatureTraits_Feature_AllowSingleViewAppsForAssignedAccess; /* size: 0x0001 */

