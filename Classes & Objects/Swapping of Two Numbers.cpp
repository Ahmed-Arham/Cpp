#include <iostream>
using namespace std;

class Swapper {
public:
    int a, b;

    void input() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void swapUsingArithmetic() {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    void display() {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main() {
    Swapper s;
    s.input();

    cout << "\nBefore Swap: ";
    s.display();

    s.swapUsingArithmetic();
    cout << "After Swap: ";
    s.display();

    return 0;
}