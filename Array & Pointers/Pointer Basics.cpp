#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr = &num;
    cout << "Value: " << *ptr << endl;
    cout << "Address: " << ptr;
    return 0;
}