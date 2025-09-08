#include <iostream>
using namespace std;

class Account {
protected:
    int accNo;
    float balance;
public:
    void inputAccount() {
        cout << "Enter account number: ";
        cin >> accNo;
        cout << "Enter balance: ";
        cin >> balance;
    }
};

class Savings : public Account {
    float interestRate;
public:
    void inputSavings() {
        cout << "Enter interest rate (%): ";
        cin >> interestRate;
    }
    void displayBalance() {
        cout << "Account No: " << accNo << endl;
        cout << "Balance after interest = " 
             << balance + (balance * interestRate / 100) << endl;
    }
};

int main() {
    Savings s;
    s.inputAccount();
    s.inputSavings();
    s.displayBalance();
    return 0;
}
