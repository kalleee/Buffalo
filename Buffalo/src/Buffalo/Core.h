#pragma once

#ifdef BF_PLATFORM_WINDOWS
	#ifdef BF_BUILD_DLL
		#define BUFFALO_API __declspec(dllexport)
	#else
		#define BUFFALO_API __declspec(dllimport)
    #endif
#elif BF_PLATFORM_LINUX
    #ifdef BF_BUILD_LIB
        #define BUFFALO_API __attribute__((visibility("default")))
    #else
        #define BUFFALO_API __attribute__((visibility("default")))
    #endif
#else
	#error Buffalo only supports Windows!
#endif
