FizzBuzz.exe: mainAlternate.o fizzbuzz.o
	g++ -std=c++14 -o FizzBuzz.exe mainAlternate.o fizzbuzz.o

fizzbuzz.o: fizzbuzz.cpp
	g++ -std=c++14 -c fizzbuzz.cpp

mainAlternate.o: mainAlternate.cpp
	g++ -std=c++14 -c mainAlternate.cpp

.PHONY: clean
clean:
	del fizzbuzz.o
	del mainAlternate.o
	del FizzBuzz.exe
