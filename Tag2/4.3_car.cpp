#include <iomanip>//needed to set precision of output
#include<iostream>
#include "car.hpp"

Car::Car(double initcap, double initfuelef):capacity(initcap), fuelEfficiency(initfuelef){
    drivenLength=0;
    remainingFuel=0;
}
bool Car::refuel (double tofuel)
{
    std::cout<<"Attempting to add "<<tofuel<<"l of fuel... ";
    if(capacity<remainingFuel+tofuel){
        std::cout<<"Not enough capacity."<<std::endl;
        return false;
    }
    else{
        std::cout<<tofuel<<"l of fuel added."<<std::endl;
        remainingFuel+=tofuel;
        return true;
    }
}

double Car::drive (double distance)
{
    std::cout<<"Attempting to drive "<<distance<<"km... ";
    if(distance<reach()||abs(distance-reach())<0.00000001){
        std::cout<<"Car goes ";
        if(drivenLength>0)std::cout<<"another ";
        std::cout<<distance<<"km."<<std::endl;
        drivenLength+=distance;
        remainingFuel-=distance*fuelEfficiency;
        return distance;
    } else if(distance>reach()){
        std::cout<<"Not enough fuel!"<<std::endl;
        return reach();
    }
}

const double Car::fillLevel()   {return remainingFuel;}
const double Car::reach()       {return remainingFuel/fuelEfficiency;}
const double Car::milage()      {return drivenLength;}
void Car::status(){
    std::cout<<std::fixed<<std::setprecision(2);
    std::cout<<"Car now has "<<fillLevel()<<"l of fuel. "
    <<"It has traveled "<<milage()<<"km. "
    <<"It can go for "<<reach()<<"km. "<<std::endl;
}