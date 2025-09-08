#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay(int amount) {
        cout << "Paying Rs." << amount << endl;
    }
};

class UPI : public Payment {
public:
    void pay(int amount) override {
        cout << "Paid Rs." << amount << " via UPI" << endl;
    }
};

class Card : public Payment {
public:
    void pay(int amount) override {
        cout << "Paid Rs." << amount << " via Credit/Debit Card" << endl;
    }
};

int main() {
    Payment* p;
    UPI u; Card c;
    p = &u; p->pay(1000);
    p = &c; p->pay(2500);
    return 0;
}
