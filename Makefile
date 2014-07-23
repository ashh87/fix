all: test

test: main.cpp fix.hpp
	g++ -Wall -O2 -o test main.cpp -lgmp -lgmpxx

clean:
	rm -rf test
