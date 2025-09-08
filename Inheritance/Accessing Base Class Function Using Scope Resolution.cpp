#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base display" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived display" << endl;
        Base::display();
    }
};

int main() {
    Derived d;
    d.display();
    return 0;
}
