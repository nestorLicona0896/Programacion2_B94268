FLAGS = -g -c --std=c++17

all:

	mkdir -p bin
	g++ $(FLAGS) src/empleadoPorHoras.cpp -o bin/empleadoPorHoras.o
	g++ $(FLAGS) src/empleadoAsalariado.cpp -o bin/empleadoAsalariado.o	
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o  bin/abstraccion  bin/empleadoPorHoras.o bin/empleadoAsalariado.obin/main.o

clean:

	rm -Rf bin