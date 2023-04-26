#pragma once

// 定义宏 当Windows构建DLL时标定导入或导出
#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define HAZEL_API _declspec(dllexport)
	#else 
		#define	HAZEL_API _declspec(dllimport)
	#endif
#else
	#error Hazel only support windows!
#endif // HAZEL_BUID_DLL
