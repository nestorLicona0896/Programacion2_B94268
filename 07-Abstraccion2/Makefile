FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/empleado.cpp -o bin/empleado.o
	g++ $(FLAGS) src/empleadoPorHoras.cpp -o bin/empleadoPorHoras.o
	g++ $(FLAGS) src/empleadoAsalariado.cpp -o bin/empleadoAsalariado.o
	g++ $(FLAGS) src/planilla.cpp -o bin/planilla.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/abstraccion bin/empleadoPorHoras.o bin/empleadoAsalariado.o bin/planilla.o bin/main.o bin/empleado.o
	
clean:
	rm -Rf bin