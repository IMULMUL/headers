enum wil::FeatureStage
{
  AlwaysDisabled = 0,
  DisabledByDefault = 1,
  EnabledByDefault = 2,
  AlwaysEnabled = 3,
};

typedef struct __WilFeatureTraits_Feature_SPSTest
{
  union
  {
    /* 0x0000 */ const unsigned int id;
    /* 0x0000 */ enum wil::FeatureStage stage;
    /* 0x0000 */ const char ___dummy337;
    /* 0x0000 */ const char ___dummy333;
    /* 0x0000 */ const char ___dummy334;
    /* 0x0000 */ const char ___dummy335;
    /* 0x0000 */ const char ___dummy336;
    /* 0x0000 */ enum wil::FeatureStage activeStage;
    /* 0x0000 */ const BOOL isAlwaysDisabled;
    /* 0x0000 */ const BOOL isAlwaysEnabled;
    /* 0x0000 */ const BOOL isEnabledByDefault;
  }; /* size: 0x0004 */
} _WilFeatureTraits_Feature_SPSTest, *P_WilFeatureTraits_Feature_SPSTest; /* size: 0x0001 */

