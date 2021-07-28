#ifndef __XCOS_TOOLBOX_SKELETON_C_GW_HXX__
#define __XCOS_TOOLBOX_SKELETON_C_GW_HXX__

#ifdef _MSC_VER
#ifdef XCOS_TOOLBOX_SKELETON_C_GW_EXPORTS
#define XCOS_TOOLBOX_SKELETON_C_GW_IMPEXP __declspec(dllexport)
#else
#define XCOS_TOOLBOX_SKELETON_C_GW_IMPEXP __declspec(dllimport)
#endif
#else
#define XCOS_TOOLBOX_SKELETON_C_GW_IMPEXP
#endif

extern "C" XCOS_TOOLBOX_SKELETON_C_GW_IMPEXP int xcos_toolbox_skeleton_c(wchar_t* _pwstFuncName);



#endif /* __XCOS_TOOLBOX_SKELETON_C_GW_HXX__ */
