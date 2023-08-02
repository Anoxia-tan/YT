#ifdef _WIN32
#define VDLL_EXPORT __declspec(dllexport)
#else
   #ifdef __linux__
   #define VDLL_EXPORT __attribute__((visibility ("default")))
   #endif
#endif