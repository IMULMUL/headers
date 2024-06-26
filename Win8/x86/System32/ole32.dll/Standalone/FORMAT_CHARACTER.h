enum FORMAT_CHARACTER
{
  FC_ZERO = 0,
  FC_BYTE = 1,
  FC_CHAR = 2,
  FC_SMALL = 3,
  FC_USMALL = 4,
  FC_WCHAR = 5,
  FC_SHORT = 6,
  FC_USHORT = 7,
  FC_LONG = 8,
  FC_ULONG = 9,
  FC_FLOAT = 10,
  FC_HYPER = 11,
  FC_DOUBLE = 12,
  FC_ENUM16 = 13,
  FC_ENUM32 = 14,
  FC_IGNORE = 15,
  FC_ERROR_STATUS_T = 16,
  FC_RP = 17,
  FC_UP = 18,
  FC_OP = 19,
  FC_FP = 20,
  FC_STRUCT = 21,
  FC_PSTRUCT = 22,
  FC_CSTRUCT = 23,
  FC_CPSTRUCT = 24,
  FC_CVSTRUCT = 25,
  FC_BOGUS_STRUCT = 26,
  FC_CARRAY = 27,
  FC_CVARRAY = 28,
  FC_SMFARRAY = 29,
  FC_LGFARRAY = 30,
  FC_SMVARRAY = 31,
  FC_LGVARRAY = 32,
  FC_BOGUS_ARRAY = 33,
  FC_C_CSTRING = 34,
  FC_C_BSTRING = 35,
  FC_C_SSTRING = 36,
  FC_C_WSTRING = 37,
  FC_CSTRING = 38,
  FC_BSTRING = 39,
  FC_SSTRING = 40,
  FC_WSTRING = 41,
  FC_ENCAPSULATED_UNION = 42,
  FC_NON_ENCAPSULATED_UNION = 43,
  FC_BYTE_COUNT_POINTER = 44,
  FC_TRANSMIT_AS = 45,
  FC_REPRESENT_AS = 46,
  FC_IP = 47,
  FC_BIND_CONTEXT = 48,
  FC_BIND_GENERIC = 49,
  FC_BIND_PRIMITIVE = 50,
  FC_AUTO_HANDLE = 51,
  FC_CALLBACK_HANDLE = 52,
  FC_UNUSED1 = 53,
  FC_POINTER = 54,
  FC_ALIGNM2 = 55,
  FC_ALIGNM4 = 56,
  FC_ALIGNM8 = 57,
  FC_UNUSED2 = 58,
  FC_UNUSED3 = 59,
  FC_UNUSED4 = 60,
  FC_STRUCTPAD1 = 61,
  FC_STRUCTPAD2 = 62,
  FC_STRUCTPAD3 = 63,
  FC_STRUCTPAD4 = 64,
  FC_STRUCTPAD5 = 65,
  FC_STRUCTPAD6 = 66,
  FC_STRUCTPAD7 = 67,
  FC_STRING_SIZED = 68,
  FC_UNUSED5 = 69,
  FC_NO_REPEAT = 70,
  FC_FIXED_REPEAT = 71,
  FC_VARIABLE_REPEAT = 72,
  FC_FIXED_OFFSET = 73,
  FC_VARIABLE_OFFSET = 74,
  FC_PP = 75,
  FC_EMBEDDED_COMPLEX = 76,
  FC_IN_PARAM = 77,
  FC_IN_PARAM_BASETYPE = 78,
  FC_IN_PARAM_NO_FREE_INST = 79,
  FC_IN_OUT_PARAM = 80,
  FC_OUT_PARAM = 81,
  FC_RETURN_PARAM = 82,
  FC_RETURN_PARAM_BASETYPE = 83,
  FC_DEREFERENCE = 84,
  FC_DIV_2 = 85,
  FC_MULT_2 = 86,
  FC_ADD_1 = 87,
  FC_SUB_1 = 88,
  FC_CALLBACK = 89,
  FC_CONSTANT_IID = 90,
  FC_END = 91,
  FC_PAD = 92,
  FC_EXPR = 93,
  FC_PARTIAL_IGNORE_PARAM = 94,
  FC_SPLIT_DEREFERENCE = 116,
  FC_SPLIT_DIV_2 = 117,
  FC_SPLIT_MULT_2 = 118,
  FC_SPLIT_ADD_1 = 119,
  FC_SPLIT_SUB_1 = 120,
  FC_SPLIT_CALLBACK = 121,
  FC_FORCED_BOGUS_STRUCT = 177,
  FC_TRANSMIT_AS_PTR = 178,
  FC_REPRESENT_AS_PTR = 179,
  FC_USER_MARSHAL = 180,
  FC_PIPE = 181,
  FC_SUPPLEMENT = 182,
  FC_RANGE = 183,
  FC_INT3264 = 184,
  FC_UINT3264 = 185,
  FC_CSARRAY = 186,
  FC_CS_TAG = 187,
  FC_STRUCTPADN = 188,
  FC_UNUSED7 = 189,
  FC_UNUSED8 = 190,
  FC_UNUSED9 = 191,
  FC_UNUSED10 = 192,
  FC_BUFFER_ALIGN = 193,
  FC_INT128 = 194,
  FC_UINT128 = 195,
  FC_FLOAT80 = 196,
  FC_FLOAT128 = 197,
  FC_END_OF_UNIVERSE = 198,
};

