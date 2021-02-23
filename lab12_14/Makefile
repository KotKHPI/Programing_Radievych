targets = main.bin
CC = clang
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src 

all: clean prep compile

clean:
	rm -rf dist
prep:
	mkdir dist
compile: 
	$(CC) $(C_OPTS) -g lab12/src/main.c -v lab12/src/lib.c -o dist/12.bin
	$(CC) $(C_OPTS) -g lab14/src/main.c -v lab14/src/lib.c -o dist/14.bin
	$(CC) $(C_OPTS) -g 1/src/main.c -v 1/src/lib.c -o dist/1.bin

doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO
