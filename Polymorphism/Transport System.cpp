#include <iostream>
using namespace std;

class Transport {
public:
    virtual void book() {
        cout << "Booking generic transport" << endl;
    }
};

class Bus : public Transport {
public:
    void book() override {
        cout << "Bus ticket booked" << endl;
    }
};

class Train : public Transport {
public:
    void book() override {
        cout << "Train ticket booked" << endl;
    }
};

int main() {
    Transport* t;
    Bus b; Train tr;
    t = &b; t->book();
    t = &tr; t->book();
    return 0;
}
