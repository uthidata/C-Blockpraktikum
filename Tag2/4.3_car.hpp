class Car{
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

private:
    
};