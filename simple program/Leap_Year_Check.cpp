#include <iostream>
using namespace std;

int main() {
    int year;
    
    cout << "Enter a year: ";
    cin >> year;
    
    // Leap year conditions:
    // 1. Divisible by 4
    // 2. If divisible by 100, must also be divisible by 400
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << year << " is a Leap Year" << endl;
    } else {
        cout << year << " is not a Leap Year" << endl;
    }
    
    return 0;
}