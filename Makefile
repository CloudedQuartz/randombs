CC=gcc
CFLAGS= -c -Wall
LIBS= -lm

all: *.o
	$(CC) $^ -o $@  $(LIBS)

%.x : %.o utilities.o # TODO WHY THE FUCK WONT IT WORK WITHOUT .x
	$(CC) $(LDFLAGS) $^ -o $@  $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) $^

.PHONY: clean
clean:
	rm -rf *.o *.x