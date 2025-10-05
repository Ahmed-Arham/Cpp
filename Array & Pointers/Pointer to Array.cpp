#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Method 1: Pointer to first element
    int *ptr1 = arr;
    
    // Method 2: Pointer to entire array
    int (*ptr2)[5] = &arr;
    
    cout << "Pointer to Array Demonstration:" << endl;
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    
    // Using pointer to first element
    cout << "Using pointer to first element:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << *(ptr1 + i) 
             << " at address: " << (ptr1 + i) << endl;
    }
    
    cout << endl << "Using pointer to entire array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << (*ptr2)[i] 
             << " at address: " << &(*ptr2)[i] << endl;
    }
    
    // Accessing 2D array with pointer
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int (*matrixPtr)[3] = matrix;
    
    cout << endl << "2D Array access:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrixPtr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}