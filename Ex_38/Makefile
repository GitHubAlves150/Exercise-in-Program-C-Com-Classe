all:	main.o Time.o
	g++ -o main Time.o main.o
Time.o:	Time.cpp Time.hpp
	g++ -c Time.cpp
main.o:	main.cpp Time.hpp
	g++ -c main.cpp
clean:	
	rm -rf *.o
vai:
	./main
