FLAGS = -g -c --std=c++17

all:

	mkdir -p bin
	g++ $(FLAGS) src/fedex.cpp -o bin/fedex.o
	g++ $(FLAGS) src/postal.cpp -o bin/postal.o	
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o  bin/envios  bin/fedex.o bin/postal.o bin/main.o

clean:

	rm -Rf bin