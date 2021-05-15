targets = 1.bin test1.bin

CC = clang
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src src/list.c src/data.c

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
format:
	doxygen
compile: 1.bin test1.bin

1.bin: src/main.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
test1.bin: test/test.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
test: clean prep compile
	./dist/test1.bin
run: clean prep compile
	./dist/1.bin

doxygen:
	doxygen Doxyfile
	
format: #TODO

tidy: # TODO
