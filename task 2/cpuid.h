#pragma once
typedef struct {
 uint32_t eax;
 uint32_t ebx;
 uint32_t edx;
 uint32_t ecx;
} cpuinfo;

#ifdef __cplusplus
extern "C" {
 cpuinfo cpuid(const uint32_t page, const uint32_t subpage = 0 );
}
#else
 cpuinfo cpuid(const uint32_t page, const uint32_t subpage);
#endif
