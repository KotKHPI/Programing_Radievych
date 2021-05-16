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
	cp src/list.h ../shared
	$(CC) -c $(C_OPTS) -fPIC -I../shared src/list.c -o dist/list.o
	$(CC) -shared dist/list.o ../shared/libdata.a -o dist/liblist.so
	cp dist/liblist.so ../shared

format: #TODO

tidy: # TODO

