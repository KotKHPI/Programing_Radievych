targets = 1.bin test1.bin

CC = clang++
C_OPTS = -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src src/list.cpp src/data.cpp

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
format:
	doxygen
compile: 1.bin test1.bin

1.bin: src/main.cpp
	$(CC) $(C_OPTS) $< -o ./dist/$@

test1.bin: test/test.cpp
	$(CC) $(C_OPTS) $< -o ./dist/$@

test: clean prep compile
	./dist/test1.bin
run: clean prep compile
	./dist/1.bin

doxygen:
	doxygen Doxyfile
	
format: #TODO

tidy: # TODO
