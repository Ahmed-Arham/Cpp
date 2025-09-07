#include <iostream>
using namespace std;

class Average {
public:
    float a, b, c;

    void input() {
        cout << "Enter three numbers: ";
        cin >> a >> b >> c;
    }

    void findAverage() {
        float avg = (a + b + c) / 3;
        cout << "Average: " << avg << endl;
    }
};

int main() {
    Average avg;
    avg.input();
    avg.findAverage();
    return 0;
}