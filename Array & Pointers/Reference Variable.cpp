#include <iostream>
using namespace std;

int main() {
    int num = 5;
    int &ref = num;
    cout << "Original: " << num << endl;
    ref = 10;
    cout << "After change: " << num;
    return 0;
}