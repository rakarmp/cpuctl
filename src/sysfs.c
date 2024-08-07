#include "sysfs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

int sysfs_read(const char *path, char *buf, int size) {
    int fd = open(path, O_RDONLY);
    if (fd < 0) {
        perror("open");
        return -1;
    }

    int bytes_read = read(fd, buf, size);
    close(fd);

    return bytes_read;
}

int sysfs_write(const char *path, const char *buf) {
    int fd = open(path, O_WRONLY);
    if (fd < 0) {
        perror("open");
        return -1;
    }

    int bytes_written = write(fd, buf, strlen(buf));
    close(fd);

    return bytes_written;
}
