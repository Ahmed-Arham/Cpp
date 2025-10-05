#include <iostream>
using namespace std;

class Calculator {
private:
    double result;
    
public:
    // Constructor
    Calculator() : result(0) {}
    
    // Inline member functions
    inline void add(double x) { result += x; }
    inline void subtract(double x) { result -= x; }
    inline void multiply(double x) { result *= x; }
    inline void divide(double x) { 
        if (x != 0) result /= x; 
        else cout << "Error: Division by zero!" << endl;
    }
    inline void reset() { result = 0; }
    inline double getResult() { return result; }
    
    // Static inline function
    static inline bool isEven(int n) {
        return (n % 2 == 0);
    }
    
    static inline bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
};

int main() {
    Calculator calc;
    int number;
    
    cout << "Calculator Operations:" << endl;
    calc.add(10);
    cout << "After adding 10: " << calc.getResult() << endl;
    
    calc.multiply(3);
    cout << "After multiplying by 3: " << calc.getResult() << endl;
    
    calc.subtract(5);
    cout << "After subtracting 5: " << calc.getResult() << endl;
    
    calc.divide(2);
    cout << "After dividing by 2: " << calc.getResult() << endl;
    
    calc.reset();
    cout << "After reset: " << calc.getResult() << endl;
    
    cout << "\nEnter a number: ";
    cin >> number;
    
    cout << number << " is " << (Calculator::isEven(number) ? "even" : "odd") << endl;
    cout << number << " is " << (Calculator::isPrime(number) ? "prime" : "not prime") << endl;
    
    return 0;
}