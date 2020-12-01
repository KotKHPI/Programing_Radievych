targets = main.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile

clean:
	rm -rf dist
prep:
	mkdir dist
compile: 
	$(CC) $(C_OPTS) Lab05_1/src/main.c -o dist/5_1.bin
	$(CC) $(C_OPTS) Lab05_2/src/main.c -o dist/5_2.bin
	$(CC) $(C_OPTS) Lab05_3/src/main.c -o dist/5_3.bin
	$(CC) $(C_OPTS) Lab05_4/src/main.c -o dist/5_4.bin
	$(CC) $(C_OPTS) Lab05_5/src/main.c -o dist/5_5.bin
	$(CC) $(C_OPTS) Lab06_1/src/main.c -o dist/6_1.bin
	$(CC) $(C_OPTS) Lab06_2/src/main.c -o dist/6_2.bin
	$(CC) $(C_OPTS) Lab06_3/src/main.c -o dist/6_3.bin
	$(CC) $(C_OPTS) Lab06_4/src/main.c -o dist/6_4.bin
	$(CC) $(C_OPTS) Lab06_5/src/main.c -o dist/6_5.bin
	$(CC) $(C_OPTS) Lab06_6/src/main.c -o dist/6_6.bin
	

doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO
