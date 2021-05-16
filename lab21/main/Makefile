targets = 1.bin

CC = clang
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
format:
	doxygen
compile: 1.bin

1.bin: src/main.c
	$(CC) $(C_OPTS) -I../shared src/main.c -llist -L../shared -o dist/1.bin
	cp ../shared/liblist.so ./dist
	
run: clean prep compile
	./dist/1.bin

doxygen:
	doxygen Doxyfile
	
format: #TODO

tidy: # TODO
