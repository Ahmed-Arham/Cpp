#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;
public:
    void inputEmployee() {
        cout << "Enter name and ID: ";
        cin >> name >> id;
    }
};

class HR : public Employee {
public:
    void show() {
        cout << "HR Employee -> Name: " << name << ", ID: " << id << endl;
    }
};

class IT : public Employee {
public:
    void show() {
        cout << "IT Employee -> Name: " << name << ", ID: " << id << endl;
    }
};

int main() {
    HR h;
    IT i;
    h.inputEmployee();
    h.show();
    i.inputEmployee();
    i.show();
    return 0;
}
