#include <iostream>
using namespace std;

// Base class for all examples
class Vehicle {
public:
    Vehicle() { cout << "This is a Vehicle." << endl; }
};

// 1. Single Inheritance
class Car : public Vehicle {
public:
    Car() { cout << "This Vehicle is a Car." << endl; }
};

// For Multiple Inheritance
class LandVehicle {
public:
    LandVehicle() { cout << "This is a Land Vehicle." << endl; }
};
class WaterVehicle {
public:
    WaterVehicle() { cout << "This is a Water Vehicle." << endl; }
};

// 2. Multiple Inheritance
class AmphibiousVehicle : public LandVehicle, public WaterVehicle {
public:
    AmphibiousVehicle() { cout << "This is both a Land and Water Vehicle." << endl; }
};

// 3. Multilevel Inheritance
class FourWheeler : public Vehicle {
public:
    FourWheeler() { cout << "This Vehicle is a FourWheeler." << endl; }
};
class Truck : public FourWheeler {
public:
    Truck() { cout << "This FourWheeler is a Truck." << endl; }
};

// 4. Hierarchical Inheritance
class Bus : public Vehicle {
public:
    Bus() { cout << "This Vehicle is a Bus." << endl; }
};
class Motorcycle : public Vehicle {
public:
    Motorcycle() { cout << "This Vehicle is a Motorcycle." << endl; }
};

int main() {
    cout << "--- 1. Single Inheritance ---" << endl;
    Car myCar;
    cout << endl;

    cout << "--- 2. Multiple Inheritance ---" << endl;
    AmphibiousVehicle myAmphibian;
    cout << endl;

    cout << "--- 3. Multilevel Inheritance ---" << endl;
    Truck myTruck;
    cout << endl;

    cout << "--- 4. Hierarchical Inheritance ---" << endl;
    Bus myBus;
    Motorcycle myMotorcycle;
    cout << endl;

    return 0;
}