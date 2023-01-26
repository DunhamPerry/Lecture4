# This is an example make file

CXX = g++  # the compiler
CXXFLAGS = -std=c++20 -Wall  # flags for the compiler (use c++20 standards, turn on all optional warnings); add -ggdb if you want to use gdb to debug!

# runs for "make all"
all: test main

# runs for "make clean"
clean:
	rm test main

main: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o main

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test