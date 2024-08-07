#include "cpu_control.h"

void set_cpu_freq(int freq) {
    // Set CPU frequency
    FILE *fp = fopen("/sys/devices/system/cpu/cpu0/cpufreq/scaling_setspeed", "w");
    if (fp != NULL) {
        fprintf(fp, "%d", freq);
        fclose(fp);
    } else {
        printf("Failed to set CPU frequency\n");
    }
}

void set_cpu_count(int count) {
    // Set CPU count
    FILE *fp = fopen("/sys/devices/system/cpu/online", "w");
    if (fp != NULL) {
        fprintf(fp, "%d", count);
        fclose(fp);
    } else {
        printf("Failed to set CPU count\n");
    }
}