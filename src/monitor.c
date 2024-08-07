#include "monitor.h"
#include "sysfs.h"

static char *monitor_path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_cur_freq";

void monitor_start() {
    while (1) {
        char freq_str[16];
        int freq;

        sysfs_read(monitor_path, freq_str, sizeof(freq_str));
        freq = atoi(freq_str);

        printf("Current frequency: %d kHz\n", freq);
        sleep(1);
    }
}
