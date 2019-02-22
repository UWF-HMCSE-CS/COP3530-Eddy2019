CXX = g++
CXXFLAGS = -std=c++11 -Wall

OBJECTS = linked_list.o node.o
HEADERS = $(shell find . -path ./test -prune -o -name "*.hpp" -print)

main: main.o $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJECTS): $(HEADERS)

clean:
	$(RM) *.o *.gch *.out core main test/TestCase
