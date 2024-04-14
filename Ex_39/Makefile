all: main.o destrutor.o 
	g++ -o main destrutor.o  main.o
destrutor.o:destrutor.cpp destrutor.hpp
	g++ -c destrutor.cpp
main.o:	main.cpp destrutor.hpp
	g++ -c main.cpp
clean:
	rm -rf *.o
vai:
	./main
