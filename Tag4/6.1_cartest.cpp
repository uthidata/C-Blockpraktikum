/*
g++ -std=c++14 -c ./6.1_car.cpp
g++ -std=c++14 -c ./6.1_cartest.cpp
g++ -std=c++14 -o 6.1_cartest.exe ./6.1_car.o ./6.1_cartest.o
./6.1_cartest.exe
*/

#include<iostream>
#include "6.1_car.hpp"

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

    CityCar CC(50.0,5.0/100.0,50);
    CC.load(25);
    CC.unload(25);

    SportsCar *SC = new SportsCar(50.0,5.0/100.0,0);
    SC->open();
    SC->close();
    delete SC;

    SportsCar SC2(50.0,5.0/100.0,0);
    c.honk();
    CC.honk();
    SC2.honk();

    Car *carPtr = &c;
    carPtr->honk();
    
    carPtr = &CC;
    carPtr->honk();

    carPtr = &SC2;
    carPtr->honk();

    return 0;
}