#include <iostream>
using namespace std;
void print(int num = 5) {
    cout << "Number: " << num;
}
int main() {
    print();
    print(10);
    return 0;
}