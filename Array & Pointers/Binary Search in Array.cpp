#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, target;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter " << n << " elements (in sorted order): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Sort the array (for binary search)
    sort(arr, arr + n);
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Enter element to search: ";
    cin >> target;
    
    // Binary search
    int left = 0;
    int right = n - 1;
    bool found = false;
    int position = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            found = true;
            position = mid;
            break;
        }
        
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    if (found) {
        cout << "Element found at position: " << position << " (index: " << position << ")" << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    
    return 0;
}