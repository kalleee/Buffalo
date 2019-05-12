#pragma once

#ifdef BF_PLATFORM_WINDOWS
	#ifdef BF_BUILD_DLL
		#define BUFFALO_API __declspec(dllexport)
	#else
		#define BUFFALO_API __declspec(dllimport)
	#endif
#else
	#error Buffalo only supports Windows!
#endif
