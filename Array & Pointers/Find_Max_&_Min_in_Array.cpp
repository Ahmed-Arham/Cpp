#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int max = INT_MIN; // Smallest possible integer
    int min = INT_MAX; // Largest possible integer
    
    // Find max and min
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;
    
    return 0;
}