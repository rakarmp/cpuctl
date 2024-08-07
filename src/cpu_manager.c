#include "cpu_manager.h"
#include "cpu_info.h"
#include "cpu_control.h"

int main(int argc, char **argv) {
    int flags = 0;
    int cpu_count = 0;
    int cpu_freq = 0;

    // Parse flags
    while ((flags = getopt(argc, argv, "hc:f:")) != -1) {
        switch (flags) {
            case 'h':
                printf("Usage: cpu_manager [-h] [-c <cpu_count>] [-f <cpu_freq>]\n");
                return 0;
            case 'c':
                cpu_count = atoi(optarg);
                break;
            case 'f':
                cpu_freq = atoi(optarg);
                break;
            default:
                printf("Invalid flag\n");
                return 1;
        }
    }

    // Get CPU info
    cpu_info_t cpu_info;
    get_cpu_info(&cpu_info);

    // Print CPU info
    printf("CPU Count: %d\n", cpu_info.cpu_count);
    printf("CPU Frequency: %d MHz\n", cpu_info.cpu_freq);

    // Set CPU frequency
    if (cpu_freq > 0) {
        set_cpu_freq(cpu_freq);
    }

    // Set CPU count
    if (cpu_count > 0) {
        set_cpu_count(cpu_count);
    }

    return 0;
}