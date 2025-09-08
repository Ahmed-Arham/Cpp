#include <iostream>
using namespace std;

class Library {
public:
    virtual void issueBook() {
        cout << "Issuing generic book" << endl;
    }
};

class EBook : public Library {
public:
    void issueBook() override {
        cout << "EBook issued via Kindle" << endl;
    }
};

class HardCopy : public Library {
public:
    void issueBook() override {
        cout << "Hardcopy book issued from library counter" << endl;
    }
};

int main() {
    Library* l;
    EBook e; HardCopy h;
    l = &e; l->issueBook();
    l = &h; l->issueBook();
    return 0;
}
