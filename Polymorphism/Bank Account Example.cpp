#include <iostream>
using namespace std;

class Account {
public:
    virtual void withdraw(float amt) {
        cout << "Withdrawing from generic account: " << amt << endl;
    }
};

class Savings : public Account {
public:
    void withdraw(float amt) override {
        cout << "Savings Account withdrawal of Rs." << amt << endl;
    }
};

class Current : public Account {
public:
    void withdraw(float amt) override {
        cout << "Current Account withdrawal of Rs." << amt << endl;
    }
};

int main() {
    Account* acc;
    Savings s; Current c;
    acc = &s; acc->withdraw(2000);
    acc = &c; acc->withdraw(5000);
    return 0;
}
