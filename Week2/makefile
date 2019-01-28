CC = g++

main: main.cpp calculator.o
	$(CC) -Wall main.cpp calculator.o -o main

calculator.o: calculator.cpp calculator.hpp
	$(CC) -Wall -c calculator.cpp

clean:
	rm *.o main
