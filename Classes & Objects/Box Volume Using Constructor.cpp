#include <iostream>
using namespace std;

class Box {
private:
    double length, width, height;
public:
    // Constructor with parameters
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
        cout << "Box object created." << endl;
    }
    // Destructor
    ~Box() {
        cout << "Box object destroyed." << endl;
    }
    double getVolume() {
        return length * width * height;
    }
};

int main() {
    Box b(10.0, 5.0, 2.0);
    cout << "Volume of the box is: " << b.getVolume() << endl;
    return 0;
}