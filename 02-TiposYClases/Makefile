all : 
	mkdir -p bin
	g++ -g -c --std=c++17 src/calculadora.cpp -o bin/calculadora.o
	g++ -g -c --std=c++17 src/main.cpp -o bin/main.o
	g++ -g -o bin/tiposyclases bin/calculadora.o bin/main.o
	

version_realese:
	mkdir -p bin
	g++ -c --std=c++17 src/calculadora.cpp -o bin/calculadora.o
	g++ -c --std=c++17 src/main.cpp -o bin/main.o
	g++ -o bin/tiposyclases bin/calculadora.o bin/main.o

clean:
	rm -Rf bin
