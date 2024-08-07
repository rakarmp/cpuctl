CC=gcc
CFLAGS=-Wall -Iinclude

SRC_DIR=src
INC_DIR=include
OBJ_DIR=obj

SRC=$(wildcard $(SRC_DIR)/*.c)
OBJ=$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

all: $(OBJ_DIR) cpuctl

$(OBJ_DIR):
    mkdir -p $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
    $(CC) $(CFLAGS) -c $< -o $@

cpuctl: $(OBJ)
    $(CC) $(CFLAGS) $^ -o $@ -L. -lcpuctl

clean:
    rm -rf $(OBJ_DIR) cpuctl libcpuctl.a

install:
    install cpuctl /usr/local/bin