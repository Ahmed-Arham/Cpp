#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Generic shape area" << endl;
    }
};

class Circle : public Shape {
    float r;
public:
    Circle(float radius) : r(radius) {}
    void area() override {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

class Square : public Shape {
    int side;
public:
    Square(int s) : side(s) {}
    void area() override {
        cout << "Area of Square = " << side * side << endl;
    }
};

int main() {
    Shape* s;
    Circle c(5);
    Square sq(4);
    s = &c; s->area();
    s = &sq; s->area();
    return 0;
}
