FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/calculadora.cpp -o bin/calculadora.o
	
test:
	mkdir -p bin
	g++ $(FLAGS) tests/calculadora_tests.cpp -o bin/calculadora_tests.o
	g++ $(FLAGS) src/calculadora.cpp -o bin/calculadora.o
	g++ -g -o bin/tests -lgtest_main -lgtest -lpthread bin/calculadora_tests.o bin/calculadora.o

clean:
	rm -Rf bin
