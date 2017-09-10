#ifndef CAR_HPP
#define CAR_HPP

class Car{
protected:
    double remainingFuel;
    double drivenLength;
    
    
public:
    const double capacity;
    const double fuelEfficiency;
    Car(double initcap, double initfuelef);
    bool refuel (double);
    double drive (double);
    const double fillLevel ();
    const double reach ();
    const double milage ();
    void status();
    virtual void honk();

private:
    
};

class CityCar:public Car{
    const double _maxkg;
    double _aktuelkg;
public:
    CityCar(double initcap, double initfuelef, double maxkg);
    void load(double kg);
    void unload(double kg);
    void honk();
};

class SportsCar:public Car{
    int _zustand;
public:
    SportsCar(double initcap,double initfuelef,bool zustand);
    void open();
    void close();
    void honk();
};

#endif