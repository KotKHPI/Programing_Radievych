targets = main.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference

all: clean prep compile

clean:
	rm -rf dist
prep:
	mkdir dist
compile: 
	$(CC) $(C_OPTS) src/main.c -o dist/1.bin

doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO
