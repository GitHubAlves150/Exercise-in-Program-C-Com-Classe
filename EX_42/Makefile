all:	main.o	Animal.o
	g++ -o main Animal.o main.o
Animal.o:Animal.cpp Animal.hpp
	g++ -c Animal.cpp
main.o:	main.cpp Animal.hpp
	g++ -c main.cpp
clean:
	rm -rf *.o
vai:
	./main


