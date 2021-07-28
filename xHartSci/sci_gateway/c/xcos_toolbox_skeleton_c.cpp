#include <wchar.h>
#include "xcos_toolbox_skeleton_c.hxx"
extern "C"
{
#include "xcos_toolbox_skeleton_c.h"
#include "addfunction.h"
}

#define MODULE_NAME L"xcos_toolbox_skeleton_c"

int xcos_toolbox_skeleton_c(wchar_t* _pwstFuncName)
{
    if(wcscmp(_pwstFuncName, L"tbx_sum") == 0){ addCStackFunction(L"tbx_sum", &sci_tbx_sum, MODULE_NAME); }

    return 1;
}
