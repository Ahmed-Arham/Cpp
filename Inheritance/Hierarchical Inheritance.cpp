#include <iostream>
using namespace std;

class Shape {
public:
    void draw() {
        cout << "Drawing shape..." << endl;
    }
};

class Circle : public Shape {
public:
    void drawCircle() {
        cout << "Drawing circle..." << endl;
    }
};

class Rectangle : public Shape {
public:
    void drawRectangle() {
        cout << "Drawing rectangle..." << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;
    c.draw();
    c.drawCircle();
    r.draw();
    r.drawRectangle();
    return 0;
}
