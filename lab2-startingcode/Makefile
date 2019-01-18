CXX = g++
CXXFLAGS = -std=c++11 -Wall

OBJECTS = foo.o # list of .o files. One for each class

# Need a rule to build objects
main: main.cpp foo.o
	$(CXX) $(CXXFLAGS) main.cpp foo.o -o main

foo.o: foo.hpp foo.cpp
	$(CXX) $(CXXFLAGS) -c foo.cpp


testBuild: main
	$(CXX) $(CXXFLAGS) -Itest/catch/catch.hpp -o test/TestCase $(OBJECTS) test/TestCase.cpp

test: clean testBuild
	test/TestCase --success

clean:
	$(RM) *.o *.gch main test/TestCase
