CC=gcc -c -I include

all:
	$(CC) src/cpu.c -o bin/cpu.o

static: all

shared: all