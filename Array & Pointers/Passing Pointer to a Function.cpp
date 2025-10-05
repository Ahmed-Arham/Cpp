#include <iostream>
using namespace std;

// Function that takes pointer as parameter
void modifyValue(int *ptr) {
    *ptr = *ptr * 2;
    cout << "Inside function - Value modified to: " << *ptr << endl;
}

// Function that returns a pointer
int* findMax(int *a, int *b) {
    if (*a > *b) {
        return a;
    } else {
        return b;
    }
}

// Function with array pointer
void printArray(int *arr, int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

// Function that swaps values using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 10, num2 = 20;
    
    cout << "Passing Pointer to Function Demonstration:" << endl;
    cout << "Original values - num1: " << num1 << ", num2: " << num2 << endl << endl;
    
    // Pass pointer to modify value
    modifyValue(&num1);
    cout << "After modifyValue - num1: " << num1 << endl << endl;
    
    // Use function that returns pointer
    int *maxPtr = findMax(&num1, &num2);
    cout << "Maximum value: " << *maxPtr << " at address: " << maxPtr << endl << endl;
    
    // Swap using pointers
    cout << "Before swap - num1: " << num1 << ", num2: " << num2 << endl;
    swap(&num1, &num2);
    cout << "After swap - num1: " << num1 << ", num2: " << num2 << endl << endl;
    
    // Array with pointer function
    int arr[] = {1, 2, 3, 4, 5};
    printArray(arr, 5);
    
    return 0;
}