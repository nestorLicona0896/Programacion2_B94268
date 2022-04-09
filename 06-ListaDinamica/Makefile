FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/nodo.cpp -o bin/nodo.o
	g++ $(FLAGS) src/listaDinamica.cpp -o bin/listaDinamica.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/listaDinamica bin/nodo.o bin/listaDinamica.o bin/main.o
	
clean:
	rm -Rf bin