CC=g++
FLAGS=-c -Wall -Werror

all: dirs main

run: all
	./bin/main

test: all
	echo "Ok"

main: main.o func.o
	$(CC) build/*.o -o bin/$@

main.o: src/main.cpp
	$(CC) $(FLAGS) -o build/$@ $<
	
func.o: src/func.cpp
	$(CC) $(FLAGS) -o build/$@ $<

dirs:
	mkdir -p bin/ build/

clean:
	rm -rf build/* bin/*

