executable: main.o name_age.o
	g++ -std=c++14 -o name_age.exe main.o name_age.o

main.o: main.cpp
	g++ -std=c++14 -c main.cpp

name_age.o: name_age.cpp
	g++ -std=c++14 -c name_age.cpp

.PHONY: clean
clean:
	del *.o
	del name_age.exe