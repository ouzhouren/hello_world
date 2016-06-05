CC=gcc
TARGET=hello_world
OBJ=src

all:hello.o
	$(CC) -o $(TARGET) hello.o

hello.o:hello.c hello.h
	$(CC) -c hello.c

clean:
	rm hello.o $(TARGET) -f
