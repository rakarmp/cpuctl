#include "cpuctl.h"
#include "governor.h"
#include "frequency.h"
#include "core.h"
#include "monitor.h"

int main(int argc, char *argv[]) {
    // Parse command-line arguments
    if (argc < 2) {
        printf("Usage: cpuctl <command> [options]\n");
        return 1;
    }

    char *command = argv[1];

    if (strcmp(command, "governor") == 0) {
        governor_set(argv[2]);
    } else if (strcmp(command, "frequency") == 0) {
        frequency_set(atoi(argv[2]), atoi(argv[3]));
    } else if (strcmp(command, "core") == 0) {
        core_set(atoi(argv[2]), atoi(argv[3]));
    } else if (strcmp(command, "monitor") == 0) {
        monitor_start();
    } else {
        printf("Unknown command: %s\n", command);
        return 1;
    }

    return 0;
}
