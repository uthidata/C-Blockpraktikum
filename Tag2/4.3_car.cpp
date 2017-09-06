//g++ -std=c++14 -o 4.3_car.exe 4.3_car.cpp
#include<iostream>

class Car{
    
    double remainingFuel;
    double drivenLength;

public:
    const double capacity;
    const double fuelEfficiency;
    Car(double initcap, double initfuelef):capacity(initcap), fuelEfficiency(initfuelef){
        drivenLength=0;
        remainingFuel=0;
    }
    bool refuel (double tofuel){
        if(capacity<remainingFuel+tofuel)
            return 0;
        else
            remainingFuel+=tofuel;
            return 1;
    }
    double drive (double distance){
        if(distance<reach()||abs(distance-reach())<0.00000001){
            std::cout<<reach()<<" okay "<<distance<<std::endl;
            drivenLength+=distance;
            remainingFuel-=distance*fuelEfficiency;
            return distance;
        } else if(distance>reach()){
            std::cout<<reach()<<" no way "<<distance<<std::endl;
            return reach();
        }
    }
    const double fillLevel (){
        return remainingFuel;
    }
    const double reach (){
        return remainingFuel/fuelEfficiency;
    }
    const double milage (){
        return drivenLength;
    }
private:
    
};

int main(){
    Car c(50.0,5.0/100.0);
    std::cout<<c.fillLevel()<<std::endl;
    std::cout<<c.milage()<<std::endl;
    c.refuel(20);
    std::cout<<c.fillLevel()<<" "<<c.reach()<<" "<<c.milage()<<std::endl;    
    c.drive(10);
    std::cout<<c.fillLevel()<<" "<<c.reach()<<" "<<c.milage()<<std::endl;
    c.refuel(c.capacity-c.fillLevel());
    std::cout<<c.fillLevel()<<" "<<c.reach()<<" "<<c.milage()<<std::endl;
    c.drive(c.reach());
    std::cout<<c.fillLevel()<<" "<<c.reach()<<" "<<c.milage()<<std::endl;
    c.drive(1);
    std::cout<<c.fillLevel()<<" "<<c.reach()<<" "<<c.milage()<<std::endl;
    c.refuel(20);
    std::cout<<c.fillLevel()<<" "<<c.reach()<<" "<<c.milage()<<std::endl;
    c.refuel(c.capacity-c.fillLevel());
    std::cout<<c.fillLevel()<<" "<<c.reach()<<" "<<c.milage()<<std::endl;
    c.refuel(20);
    std::cout<<c.fillLevel()<<" "<<c.reach()<<" "<<c.milage()<<std::endl;
}