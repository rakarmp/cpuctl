#include "governor.h"
#include "sysfs.h"

static char *governor_path = "/sys/devices/system/cpu/cpu0/cpufreq/scaling_governor";

void governor_set(char *policy) {
    sysfs_write(governor_path, policy);
}
