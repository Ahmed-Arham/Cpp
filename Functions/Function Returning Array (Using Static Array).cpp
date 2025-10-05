#include <iostream>
using namespace std;

// Function returning pointer to array (static array)
int* createStaticArray(int size) {
    static int arr[100]; // Static to persist after function returns
    
    for (int i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10; // Initialize with values
    }
    
    return arr;
}

int main() {
    int size;
    
    cout << "Enter array size: ";
    cin >> size;
    
    int* ptr = createStaticArray(size);
    
    cout << "Static array elements: ";
    for (int i = 0; i < size; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;
    
    return 0;
}