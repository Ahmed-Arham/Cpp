#include <iostream>
using namespace std;

int main() {
    int n, target;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter element to search: ";
    cin >> target;
    
    bool found = false;
    int position = -1;
    
    // Linear search
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = true;
            position = i;
            break;
        }
    }
    
    if (found) {
        cout << "Element found at position: " << position << " (index: " << position << ")" << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    
    return 0;
}