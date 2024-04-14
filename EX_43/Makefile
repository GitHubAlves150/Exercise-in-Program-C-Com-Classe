all: 		recursao.o main.o
		g++ -o main recursao.o main.o
recursao.o:	recursao.cpp recursao.hpp
		g++ -c recursao.cpp
main.o:		main.cpp recursao.hpp
		g++ -c main.cpp
clean:
		rm -rf *.o
vai:
		./main
