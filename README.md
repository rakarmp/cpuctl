# CPU Control Tool (cpuctl)

## Overview

The CPU Control Tool (cpuctl) is a Linux-based application written in C that provides users with a command-line interface to control and manage CPU usage on their systems. With cpuctl, users can optimize system performance, reduce power consumption, and gain insights into CPU behavior.


## Features

### Governor Control

- Set and manage CPU governor policies (ondemand, performance, conservative, etc.)
- Configure governor settings for optimal performance or power savings

### Clock Frequency Control

- Set and manage CPU clock frequencies ( scaling_min_freq, scaling_max_freq, etc.)
- Configure frequency settings for optimal performance or power savings

### Core Control

- Enable or disable individual CPU cores
- Configure core settings for optimal performance or power savings

### Monitoring and Analytics

- Real-time monitoring of CPU usage, frequency, and temperature
- Historical data analysis and visualization

## Installlation

### Dependencies

- Linux Kernel 3.10 Or Latest LTS
- GCC Compiler

### Building From Source

1. Clone the repository: `git clone https://github.com/rakarmp/cpuctl.git`
2. Change into the repository directory: `cd cpuctl`
3. Create a build directory: `mkdir build`
4. Change into the build directory: `cd build`
5. Run the following command to build the project: `cmake .. && make`
6. Install the cpuctl command: `sudo make install`

### Using Makefile

1. Clone the repository: `git clone https://github.com/rakarmp/cpuctl.git`
2. Change into the repository directory: `cd cpuctl`
3. Run the following command to build and install the project: `make && sudo make install`

## Usage

```bash
cpuctl <command> [options]
```

- `governor`: Set the CPU governor policy (e.g. `cpuctl governor performance`)
- `frequency`: Set the CPU frequency range (e.g. `cpuctl frequency 1000 2000`)
- `core`: Set the online/offline status of a CPU core (e.g. `cpuctl core 0 1`)
- `monitor`: Monitor the current CPU frequency (e.g. `cpuctl monitor`)

## Troubleshooting

### Common Issues

- CPU governor not changing: Check kernel version and governor support
- Clock frequency not changing: Check kernel version and frequency support
- Core control not working: Check kernel version and core support

### Reporting Issues

- File an issue on GitHub: [Here](https://github.com/rakarmp/cpuctl/issues)
- Provide detailed information about the issue, including system configuration and error messages

## License

cpuctl is licensed under the GNU General Public License version 2 (GPLv2).

## Contributing

Contributions are welcome! Please fork the repository, make changes, and submit a pull request.

## Acknowledgments

cpuctl is built on top of the Linux kernel and uses the following open-source libraries:

- `sysfs` for accessing CPU information
- `stdio` for command-line interface

## Contact

For questions, comments, or feedback, please contact the maintainer at rakaabdirmp@gmail.com or Telegram `@Zyarexx`
