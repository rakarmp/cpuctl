#ifndef SYSFS_H
#define SYSFS_H

int sysfs_read(const char *path, char *buf, int size);
int sysfs_write(const char *path, const char *buf);

#endif // SYSFS_H