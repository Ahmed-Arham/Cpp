#include <iostream>
using namespace std;

class Number {
public:
    int num;

    void input() {
        cout << "Enter a number: ";
        cin >> num;
    }

    void checkEvenOdd() {
        if (num % 2 == 0)
            cout << num << " is Even" << endl;
        else
            cout << num << " is Odd" << endl;
    }
};

int main() {
    Number n;
    n.input();
    n.checkEvenOdd();
    return 0;
}