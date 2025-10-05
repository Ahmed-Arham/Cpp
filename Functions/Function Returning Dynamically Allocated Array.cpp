#include <iostream>
using namespace std;

// Function returning pointer to dynamically allocated array
int* createDynamicArray(int size) {
    int* arr = new int[size]; // Dynamic memory allocation
    
    for (int i = 0; i < size; i++) {
        arr[i] = (i + 1) * (i + 1); // Squares of numbers
    }
    
    return arr;
}

// Function to display array
void displayArray(int* arr, int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    
    cout << "Enter array size: ";
    cin >> size;
    
    int* dynamicArray = createDynamicArray(size);
    
    displayArray(dynamicArray, size);
    
    // Don't forget to delete dynamically allocated memory!
    delete[] dynamicArray;
    dynamicArray = nullptr;
    
    return 0;
}