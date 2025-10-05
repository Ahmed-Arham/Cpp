#include <iostream>
using namespace std;

// Call by Value - creates copy of parameters
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue - a: " << a << ", b: " << b << endl;
}

// Call by Reference - works with original variables
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByReference - a: " << a << ", b: " << b << endl;
}

int main() {
    int x = 10, y = 20;
    
    cout << "Before swapping - x: " << x << ", y: " << y << endl;
    
    // Call by Value - won't affect original variables
    swapByValue(x, y);
    cout << "After swapByValue - x: " << x << ", y: " << y << endl;
    
    // Call by Reference - will affect original variables
    swapByReference(x, y);
    cout << "After swapByReference - x: " << x << ", y: " << y << endl;
    
    return 0;
}