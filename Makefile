CC=gcc
# CFLAGS will be the options passed to the compiler.
CFLAGS= -c -Wall
LIBS= -lm

all: *.o
	$(CC) $(LIBS) $< -o $@

%: %.o #utilities.o TODO
	$(CC) $< -o $@  $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) $<

.PHONY: clean # not actual target
clean:
	rm -rf *.o 