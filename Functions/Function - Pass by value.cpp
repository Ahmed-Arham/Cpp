#include <iostream>
using namespace std;

void change(int num) {
    num = 10;
}
int main() {
    int num = 5;
    change(num);
    cout << "Value remains: " << num;
    return 0;
}