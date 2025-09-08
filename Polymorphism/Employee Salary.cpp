#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculateSalary() {
        cout << "Generic salary" << endl;
    }
};

class Developer : public Employee {
public:
    void calculateSalary() override {
        cout << "Developer salary: Rs. 80,000" << endl;
    }
};

class Manager : public Employee {
public:
    void calculateSalary() override {
        cout << "Manager salary: Rs. 1,20,000" << endl;
    }
};

int main() {
    Employee* e;
    Developer d; Manager m;
    e = &d; e->calculateSalary();
    e = &m; e->calculateSalary();
    return 0;
}
