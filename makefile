CC := gcc

all: main.c func.c func.h
	$(CC) main.c -o main