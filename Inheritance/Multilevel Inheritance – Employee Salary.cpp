#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    void inputPerson() {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Employee : public Person {
protected:
    int empID;
public:
    void inputEmployee() {
        cout << "Enter employee ID: ";
        cin >> empID;
    }
};

class Salary : public Employee {
    float basic, hra, da;
public:
    void inputSalary() {
        cout << "Enter basic, HRA, DA: ";
        cin >> basic >> hra >> da;
    }
    void displaySalary() {
        cout << "Employee: " << name << " (ID: " << empID << ")" << endl;
        cout << "Gross Salary = " << (basic + hra + da) << endl;
    }
};

int main() {
    Salary s;
    s.inputPerson();
    s.inputEmployee();
    s.inputSalary();
    s.displaySalary();
    return 0;
}
