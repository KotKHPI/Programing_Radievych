CC = clang
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference 


all: clean prep compile

clean:
	rm -rf dist
prep:
	mkdir dist
format:
	doxygen
compile:
	cp src/data.h ../shared
	$(CC) -c $(C_OPTS) src/data.c -o ./dist/data.o
	ar rcs ./dist/libdata.a ./dist/data.o
	cp ./dist/libdata.a ../shared

format: #TODO

tidy: # TODO

