targets = main.bin
CC = clang
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src 

all: clean prep compile

clean:
	rm -rf dist
prep:
	mkdir dist
compile: 
	$(CC) $(C_OPTS) -g 1/src/main.c -v 1/src/lib.c -o dist/1.bin
	$(CC) $(C_OPTS) -g 2/src/main.c -v 2/src/lib.c -o dist/2.bin
	$(CC) $(C_OPTS) -g 3/src/main.c -v 3/src/lib.c -o dist/3.bin

doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO
