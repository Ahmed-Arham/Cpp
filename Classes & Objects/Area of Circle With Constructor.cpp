#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
public:
    // Constructor to initialize the radius
    Circle(double r) {
        radius = r;
        cout << "Circle object created with radius " << radius << endl;
    }
    // Destructor
    ~Circle() {
        cout << "Circle object destroyed." << endl;
    }
    double getArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle c(5.0);
    cout << "Area of the circle is: " << c.getArea() << endl;
    return 0;
}