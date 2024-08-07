#include "core.h"
#include "sysfs.h"

static char *core_path = "/sys/devices/system/cpu/cpu";

void core_set(int core_id, int enable) {
    char path[64];
    char enable_str[2];

    snprintf(path, sizeof(path), "%s%d/online", core_path, core_id);
    snprintf(enable_str, sizeof(enable_str), "%d", enable);

    sysfs_write(path, enable_str);
}