
FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/calculadora.cpp -o bin/calculadora.o
	
test:
	mkdir -p bin
	g++ $(FLAGS) tests/tests_calculadora_suma.cpp -o bin/tests_calculadora_suma.o
	g++ $(FLAGS) tests/tests_calculadora_operacionespecial.cpp -o bin/tests_calculadora_operacionespecial.o
	g++ $(FLAGS) src/calculadora.cpp -o bin/calculadora.o
	g++ -g -o bin/tests bin/tests_calculadora_suma.o bin/tests_calculadora_operacionespecial.o bin/calculadora.o -lgtest -lgtest_main -lpthread

clean:
	rm -Rf bin