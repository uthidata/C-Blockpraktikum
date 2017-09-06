/*
g++ -std=c++14 -c ./4.3_car.cpp
g++ -std=c++14 -c ./4.3_cartest.cpp
g++ -std=c++14 -o 4.3_cartest.exe ./4.3_car.o ./4.3_cartest.o
./4.3_cartest.exe
*/

#include<iostream>
#include "car.hpp"

int main(){
    Car c(50.0,5.0/100.0);c.status();
    c.refuel(20);c.status();
    c.drive(10);c.status();
    c.refuel(c.capacity-c.fillLevel());c.status();
    c.drive(c.reach());c.status();
    c.drive(1);c.status();
    c.refuel(20);c.status();
    c.refuel(c.capacity-c.fillLevel());c.status();
    c.refuel(20);c.status();
    return 0;
}