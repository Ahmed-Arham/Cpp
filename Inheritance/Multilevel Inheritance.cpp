#include <iostream>
using namespace std;

class Grandparent {
public:
    void property() {
        cout << "Has property." << endl;
    }
};

class Parent : public Grandparent {
public:
    void car() {
        cout << "Has car." << endl;
    }
};

class Child : public Parent {
public:
    void mobile() {
        cout << "Has mobile." << endl;
    }
};

int main() {
    Child c;
    c.property();
    c.car();
    c.mobile();
    return 0;
}
