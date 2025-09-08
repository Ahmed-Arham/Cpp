#include <iostream>
using namespace std;

class Parent {
protected:
    int x = 10;
};

class Child : public Parent {
public:
    void display() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    Child c;
    c.display();
    return 0;
}
