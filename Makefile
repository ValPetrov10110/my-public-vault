CXXFLAGS = -Wall -Wextra -pedantic -std=c++23

all:
	$(CXX) $(CXXFLAGS) main.cpp -o main