#include <iomanip>//needed to set precision of output
#include<iostream>
#include "6.1_car.hpp"

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

void Car::honk()
{
    std::cout<<"Beep"<<std::endl;
}



CityCar::CityCar(double initcap, double initfuelef, double maxkg):
Car(initcap,initfuelef),_maxkg(maxkg)
{
    drivenLength=0;
    remainingFuel=0;
    _aktuelkg = 0;
}

void CityCar::load(double kg)
{
    std::cout<<"Trying to load "<<kg<< "kg... ";
    if(_aktuelkg+kg>_maxkg) std::cout<<"New load too heavy."<<std::endl;
    else{
        _aktuelkg+=kg;
        std::cout<<kg<<"kg loaded."<<std::endl;
    }
}

void CityCar::unload(double kg)
{
    std::cout<<"Trying to unload "<<kg<< "kg... ";
    if(_aktuelkg-kg<0) std::cout<<"We don't even have that much to unload."<<std::endl;
    else{
        _aktuelkg-=kg;
        std::cout<<kg<<"kg unloaded."<<std::endl;
    }
}

void CityCar::honk()
{
    std::cout<<"Toot!"<<std::endl;
}

SportsCar::SportsCar(double initcap,double initfuelef,bool zustand):
Car(initcap,initfuelef),_zustand(zustand)
{
    drivenLength=0;
    remainingFuel=0;
}

void SportsCar::open()
{
    _zustand=1;
    std::cout<<"Verdeck ist jetzt offen."<<std::endl;
}

void SportsCar::close()
{
    _zustand=0;
    std::cout<<"Verdeck ist jetzt zu."<<std::endl;
}

void SportsCar::honk()
{
    std::cout<<"Get out of my lane!"<<std::endl;
}