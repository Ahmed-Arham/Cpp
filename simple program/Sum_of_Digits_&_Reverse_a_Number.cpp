#include <iostream>
using namespace std;

int main() {
    int num, original, digit, sum = 0, reverse = 0;
    
    cout << "Enter a number: ";
    cin >> num;
    
    original = num;
    
    // Calculate sum of digits and reverse
    while (num != 0) {
        digit = num % 10;           // Get last digit
        sum += digit;               // Add to sum
        reverse = reverse * 10 + digit; // Build reverse number
        num /= 10;                  // Remove last digit
    }
    
    cout << "Original number: " << original << endl;
    cout << "Sum of digits: " << sum << endl;
    cout << "Reverse number: " << reverse << endl;
    
    return 0;
}