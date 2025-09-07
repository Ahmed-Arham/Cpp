#include <iostream>
using namespace std;
void print(int num) {
    cout << "Integer: " << num << endl;
}
void print(double num) {
    cout << "Double: " << num << endl;
}
int main() {
    print(5);
    print(5.5);
    return 0;
}