CC=gcc
CFLAGS=-c -Wall
LFLAGS=-o

SOURCES=src/cpu_manager.c src/cpu_info.c src/cpu_control.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=cpu_manager

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
    $(CC) $(LFLAGS) $@ $^

.c.o:
    $(CC) $(CFLAGS) $<

clean:
    rm -f *.o $(EXECUTABLE)