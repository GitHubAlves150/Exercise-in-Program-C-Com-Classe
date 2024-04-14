all:	main.o sobrecarga.o 
	g++ -o main sobrecarga.o  main.o
sobrecarga.o:sobrecarga.cpp sobrecarga.hpp
	g++ -c sobrecarga.cpp
main.o: main.cpp sobrecarga.hpp
	g++ -c main.cpp
clean:
	rm -rf *.o
vai:
	./main
