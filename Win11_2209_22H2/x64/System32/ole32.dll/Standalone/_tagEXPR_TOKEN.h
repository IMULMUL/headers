typedef enum _tagEXPR_TOKEN
{
  FC_EXPR_START = 0,
  FC_EXPR_ILLEGAL = 0,
  FC_EXPR_CONST32 = 1,
  FC_EXPR_CONST64 = 2,
  FC_EXPR_VAR = 3,
  FC_EXPR_OPER = 4,
  FC_EXPR_NOOP = 5,
  FC_EXPR_END = 6,
} tagEXPR_TOKEN, *PtagEXPR_TOKEN;

