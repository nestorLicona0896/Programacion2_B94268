FLAGS = -g -c --std=c++17

all:

	mkdir -p bin
	g++ $(FLASGS) src/calculadora.cpp -o bin/calculadora.o	
	g++ $(FLASGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/punteros bin/calculadora.o bin/main.o
	

clean:

	rm -Rf bin