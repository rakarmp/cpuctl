#ifndef CPU_CONTROL_H
#define CPU_CONTROL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void set_cpu_freq(int freq);
void set_cpu_count(int count);

#endif  // CPU_CONTROL_H