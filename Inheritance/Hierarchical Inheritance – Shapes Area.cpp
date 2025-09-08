#include <iostream>
using namespace std;

class Shape {
public:
    void showType() {
        cout << "Shape class" << endl;
    }
};

class Circle : public Shape {
    float r;
public:
    void input() {
        cout << "Enter radius: ";
        cin >> r;
    }
    void area() {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape {
    float l, b;
public:
    void input() {
        cout << "Enter length and breadth: ";
        cin >> l >> b;
    }
    void area() {
        cout << "Area of Rectangle = " << l * b << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;
    c.input();
    c.area();
    r.input();
    r.area();
    return 0;
}
