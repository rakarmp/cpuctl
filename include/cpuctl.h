#ifndef CPUCTL_H
#define CPUCTL_H

void governor_set(char *policy);
void frequency_set(int min_freq, int max_freq);
void core_set(int core_id, int enable);
void monitor_start();

#endif // CPUCTL_H
