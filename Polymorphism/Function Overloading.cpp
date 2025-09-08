#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math m;
    cout << "Int sum: " << m.add(5, 3) << endl;
    cout << "Double sum: " << m.add(2.5, 3.7) << endl;
    return 0;
}
