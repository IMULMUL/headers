enum DDE_DISPATCH_FUNC
{
  DDE_DISP_SENDONDATACHANGE = 1,
  DDE_DISP_OLECALLBACK = 2,
  DDE_DISP_SRVRWNDPROC = 3,
  DDE_DISP_DOCWNDPROC = 4,
};

struct tagOLE1DISPATCHDATA
{
  /* 0x0000 */ enum DDE_DISPATCH_FUNC wDispFunc;
}; /* size: 0x0004 */

