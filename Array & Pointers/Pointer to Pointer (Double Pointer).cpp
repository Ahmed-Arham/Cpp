#include <iostream>
using namespace std;

int main() {
    int value = 100;
    int *ptr = &value;     // Pointer to integer
    int **pptr = &ptr;     // Pointer to pointer to integer
    
    cout << "Pointer to Pointer Demonstration:" << endl;
    cout << "Value of variable: " << value << endl;
    cout << "Address of variable: " << &value << endl << endl;
    
    cout << "Single pointer (ptr):" << endl;
    cout << "Value of ptr (address it holds): " << ptr << endl;
    cout << "Address of ptr: " << &ptr << endl;
    cout << "Value at ptr (*ptr): " << *ptr << endl << endl;
    
    cout << "Double pointer (pptr):" << endl;
    cout << "Value of pptr (address it holds): " << pptr << endl;
    cout << "Address of pptr: " << &pptr << endl;
    cout << "Value at pptr (*pptr): " << *pptr << endl;
    cout << "Value at **pptr: " << **pptr << endl << endl;
    
    // Changing value through double pointer
    **pptr = 200;
    cout << "After **pptr = 200:" << endl;
    cout << "Value of variable: " << value << endl;
    cout << "Value at *ptr: " << *ptr << endl;
    cout << "Value at **pptr: " << **pptr << endl;
    
    return 0;
}