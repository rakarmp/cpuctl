CC=gcc
CFLAGS=-Wall -Werror -std=c99 -pedantic -Iinclude
LDFLAGS=-L. -lsysfs
SOURCES=src/core.c src/frequency.c src/governor.c src/monitor.c src/sysfs.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=cpuctl

all: build install

build: $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) $(LDFLAGS) -o $(EXECUTABLE)

install: build
	sudo install $(EXECUTABLE) /usr/local/bin/

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)