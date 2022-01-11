TARGET = prog
LIBS = -lm
CC = gcc
CFLAGS = -g -Wall -Werror

.PHONY: default all clean

default: $(TARGET)
all: default

UTILS   = ../utils.c
OBJECTS = $(patsubst %.c, %.o, $(wildcard *.c))
HEADERS = $(wildcard *.h)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

.PRECIOUS: $(TARGET) $(OBJECTS) $(UTILS)

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) $(UTILS) -Wall $(LIBS) -o $@

clean:
	-rm -f *.o
	-rm -f $(TARGET)
