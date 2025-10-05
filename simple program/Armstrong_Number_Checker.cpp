#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0, n = 0;
    
    cout << "Enter a number: ";
    cin >> num;
    
    originalNum = num;
    
    // Count number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }
    
    temp = num;
    
    // Calculate Armstrong number
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }
    
    if (result == originalNum) {
        cout << originalNum << " is an Armstrong number." << endl;
    } else {
        cout << originalNum << " is not an Armstrong number." << endl;
    }
    
    return 0;
}