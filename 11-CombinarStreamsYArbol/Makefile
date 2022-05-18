FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/arbolCatalogo.cpp -o bin/arbolCatalogo.o
	g++ $(FLAGS) src/nodoCategoria.cpp -o bin/nodoCategoria.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o	
	g++ -g -o bin/arbolystream bin/arbolCatalogo.o bin/nodoCategoria.o bin/main.o

test:
	mkdir -p bin	
	g++ $(FLAGS) src/arbolCatalogo.cpp -o bin/arbolCatalogo.o
	g++ $(FLAGS) src/nodoCategoria.cpp -o bin/nodoCategoria.o
	g++ $(FLAGS) tests/arbol_catalogo_tests.cpp -o bin/arbol_catalogo_tests.o	
	g++ $(FLAGS) tests/nodo_categoria_tests.cpp -o bin/nodo_categoria_tests.o	
	g++ -g -o bin/tests bin/arbolCatalogo.o bin/nodoCategoria.o bin/arbol_catalogo_tests.o bin/nodo_categoria_tests.o -lgtest -lgtest_main -lpthread
	
clean:
	rm -Rf bin