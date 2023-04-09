#pragma once

#ifdef DS_PLATFORM_WINDOWS
	#ifdef DS_BUILD_DLL
		#define DOOM_STYLE_API __declspec(dllexport)
	#else
		#define DOOM_STYLE_API	__declspec(dllimport)
	#endif
#else
	#error Engine only supports windows!
#endif