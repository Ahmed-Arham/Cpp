#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to first element
    
    cout << "Pointer Arithmetic Demonstration:" << endl;
    cout << "Original array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    
    cout << "ptr points to: " << *ptr << " at address: " << ptr << endl;
    
    // Increment pointer
    ptr++;
    cout << "After ptr++: " << *ptr << " at address: " << ptr << endl;
    
    // Decrement pointer
    ptr--;
    cout << "After ptr--: " << *ptr << " at address: " << ptr << endl;
    
    // Pointer addition
    ptr = ptr + 2;
    cout << "After ptr + 2: " << *ptr << " at address: " << ptr << endl;
    
    // Pointer subtraction
    ptr = ptr - 1;
    cout << "After ptr - 1: " << *ptr << " at address: " << ptr << endl;
    
    // Pointer difference
    int *ptr1 = &arr[0];
    int *ptr2 = &arr[3];
    cout << "Difference between ptr2 and ptr1: " << (ptr2 - ptr1) << " elements" << endl;
    
    return 0;
}