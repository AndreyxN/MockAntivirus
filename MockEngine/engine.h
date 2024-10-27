#pragma once

#ifdef MOCKENGINE_EXPORTS
#define MOCKENGINE_API __declspec(dllexport)
#else
#define MOCKENGINE_API __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C" {
#endif

    MOCKENGINE_API void ScanFile(const char* filename);

#ifdef __cplusplus
}
#endif