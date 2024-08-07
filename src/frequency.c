#include "frequency.h"
#include "sysfs.h"

static char *min_freq_path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_min_freq";
static char *max_freq_path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_max_freq";

void frequency_set(int min_freq, int max_freq) {
    char min_freq_str[16];
    char max_freq_str[16];

    snprintf(min_freq_str, sizeof(min_freq_str), "%d", min_freq);
    snprintf(max_freq_str, sizeof(max_freq_str), "%d", max_freq);

    sysfs_write(min_freq_path, min_freq_str);
    sysfs_write(max_freq_path, max_freq_str);
}