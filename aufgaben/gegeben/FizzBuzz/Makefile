FizzBuzz.exe: main.o fizzbuzz.o
	g++ -std=c++14 -o FizzBuzz.exe fizzbuzz.o main.o

fizzbuzz.o: fizzbuzz.cpp
	g++ -std=c++14 -c fizzbuzz.cpp

.PHONY: clean
clean:
	del fizzbuzz.o
	del FizzBuzz.exe
