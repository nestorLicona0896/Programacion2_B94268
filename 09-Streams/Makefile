FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/cuentaPalabras.cpp -o bin/cuentaPalabras.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o	
	g++ -g -o bin/streams bin/main.o bin/cuentaPalabras.o


	
clean:
	rm -Rf bin