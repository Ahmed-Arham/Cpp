#include <iostream>
using namespace std;

// Inline function to find maximum of two numbers
inline int findMax(int a, int b) {
    return (a > b) ? a : b;
}

// Inline function to find minimum of two numbers
inline int findMin(int a, int b) {
    return (a < b) ? a : b;
}

// Inline function to swap two numbers
inline void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    
    cout << "Enter two numbers: ";
    cin >> x >> y;
    
    cout << "Original numbers: x = " << x << ", y = " << y << endl;
    cout << "Maximum: " << findMax(x, y) << endl;
    cout << "Minimum: " << findMin(x, y) << endl;
    
    swapNumbers(x, y);
    cout << "After swap: x = " << x << ", y = " << y << endl;
    
    return 0;
}