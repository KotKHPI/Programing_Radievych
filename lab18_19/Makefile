targets = 1.bin test1.bin 2.bin test2.bin

CC = clang
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./1/src 1/src/lib.c

C_OPTS2 = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./2/src 2/src/list.c 2/src/data.c

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
format:
	doxygen
compile: 1.bin test1.bin 2.bin test2.bin

1.bin: 1/src/main.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
test1.bin: 1/test/test.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
2.bin: 2/src/main.c
	 $(CC) $(C_OPTS2) $< -o ./dist/$@
test2.bin: 2/test/test.c
	 $(CC) $(C_OPTS2) $< -o ./dist/$@
test: clean prep compile
	./dist/test1.bin
	./dist/test2.bin
run: clean prep compile
	./dist/1.bin
	./dist/2.bin

doxygen:
	doxygen Doxyfile
	
format: #TODO

tidy: # TODO
