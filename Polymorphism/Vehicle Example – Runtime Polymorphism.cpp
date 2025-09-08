#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void start() {
        cout << "Starting generic vehicle" << endl;
    }
};

class Car : public Vehicle {
public:
    void start() override {
        cout << "Car starts with a key" << endl;
    }
};

class Bike : public Vehicle {
public:
    void start() override {
        cout << "Bike starts with a kick" << endl;
    }
};

int main() {
    Vehicle* v;
    Car c; Bike b;
    v = &c; v->start();
    v = &b; v->start();
    return 0;
}
