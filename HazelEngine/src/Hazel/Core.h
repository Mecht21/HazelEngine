#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API __declspec(dllexport)
	#else HZ_BUILD_DLL
		#define HAZEL_API __declspec(dllimport)
	#endif
#else 
	#error Hazel Only support Windows!

#endif // HZ_PLATFORM_WINDOWS

