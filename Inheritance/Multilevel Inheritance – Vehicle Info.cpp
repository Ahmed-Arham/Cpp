#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
public:
    void inputVehicle() {
        cout << "Enter brand: ";
        cin >> brand;
    }
};

class Car : public Vehicle {
protected:
    string model;
public:
    void inputCar() {
        cout << "Enter model: ";
        cin >> model;
    }
};

class ElectricCar : public Car {
    int batteryLife;
public:
    void inputElectricCar() {
        cout << "Enter battery life (hours): ";
        cin >> batteryLife;
    }
    void display() {
        cout << "Brand: " << brand << ", Model: " << model 
             << ", Battery Life: " << batteryLife << " hrs" << endl;
    }
};

int main() {
    ElectricCar e;
    e.inputVehicle();
    e.inputCar();
    e.inputElectricCar();
    e.display();
    return 0;
}
