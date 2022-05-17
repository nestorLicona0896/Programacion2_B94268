FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/cuentaPalabras.cpp -o bin/cuentaPalabras.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o	
	g++ -g -o bin/streams bin/main.o bin/cuentaPalabras.o

test:
	mkdir -p bin
	g++ $(FLAGS) src/cuentaPalabras.cpp -o bin/cuentaPalabras.o
	g++ $(FLAGS) tests/cuentaPalabras_tests.cpp -o bin/cuentaPalabras_tests.o	
	g++ -g -o bin/tests bin/cuentaPalabras_tests.o bin/cuentaPalabras.o -lgtest -lgtest_main -lpthread

	
clean:
	rm -Rf bin