#ifndef CPU_MANAGER_H
#define CPU_MANAGER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct {
    int cpu_count;
    int cpu_freq;
} cpu_info_t;

void get_cpu_info(cpu_info_t *cpu_info);
void set_cpu_freq(int freq);
void set_cpu_count(int count);

#endif  // CPU_MANAGER_H