#include<iostream>

class Car{
public:
    Car(double _fuelLevel, double fuelEfficiency);
    bool refuel (double remainingFuel);
    double drive (double _distance);
    double fillLevel (double _fuelLevel);
    double reach (double _reach);
    double milage (double _gone);
private:
    double fuelEfficiency;
}

int main(){
    Car myCar(50,5/100);
}