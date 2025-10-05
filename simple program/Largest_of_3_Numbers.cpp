#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    
    int largest;
    
    // Using if-else ladder
    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }
    
    cout << "Largest number is: " << largest << endl;
    
    // Alternative using ternary operator
    // largest = (a >= b) ? ((a >= c) ? a : c) : ((b >= c) ? b : c);
    
    return 0;
}