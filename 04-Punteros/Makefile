FLAGS = -g -c --std=c++17

all:

	mkdir -p bin
	g++ $(FLAGS) src/calculadora.cpp -o bin/calculadora.o	
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o  bin/punteros  bin/calculadora.o bin/main.o
	

clean:

	rm -Rf bin