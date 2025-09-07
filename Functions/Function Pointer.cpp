#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}
int main() {
    int (*funcPtr)(int, int) = add;
    cout << "Sum: " << funcPtr(5, 3);
    return 0;
}