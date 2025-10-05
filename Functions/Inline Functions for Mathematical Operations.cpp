#include <iostream>
#include <cmath>
using namespace std;

// Inline function for addition
inline double add(double a, double b) {
    return a + b;
}

// Inline function for subtraction
inline double subtract(double a, double b) {
    return a - b;
}

// Inline function for multiplication
inline double multiply(double a, double b) {
    return a * b;
}

// Inline function for division
inline double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

// Inline function for power calculation
inline double power(double base, double exponent) {
    return pow(base, exponent);
}

int main() {
    double num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    cout << "Mathematical Operations:" << endl;
    cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
    cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << endl;
    cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
    cout << num1 << " / " << num2 << " = " << divide(num1, num2) << endl;
    cout << num1 << " ^ " << num2 << " = " << power(num1, num2) << endl;
    
    return 0;
}