CC = gcc
FLAGS = -c -I src -I test -I Lib -Wall -Werror

all: main Test

main: main.o func.o
	mkdir -p bin
	$(CC) build/igra/*.o -o bin/$@

main.o: src/main.cpp
	mkdir -p build/igra
	$(CC) $(FLAGS) -o build/igra/$@ $<
	
func.o: src/func.cpp
	mkdir -p build/igra
	$(CC) $(FLAGS) -o build/igra/$@ $<


Test: test
test: progect.o testMain.o
	mkdir -p bin
	$(CC) build/test/*.o -o bin/$@

testMain.o: test/main.c
	mkdir -p build/test
	$(CC) $(FLAGS) -o build/test/$@ $<

progect.o: test/progect_test.c
	mkdir -p build/test
	$(CC) $(FLAGS) -o build/test/$@ $<




.Phony: clean

clean:
	rm -rf build bin

