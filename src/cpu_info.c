#include "cpu_info.h"

void get_cpu_info(cpu_info_t *cpu_info) {
    // Get CPU count
    cpu_info->cpu_count = sysconf(_SC_NPROCESSORS_ONLN);

    // Get CPU frequency
    FILE *fp = fopen("/sys/devices/system/cpu/cpu0/cpufreq/scaling_cur_freq", "r");
    if (fp != NULL) {
        fscanf(fp, "%d", &cpu_info->cpu_freq);
        fclose(fp);
    } else {
        cpu_info->cpu_freq = 0;
    }
}