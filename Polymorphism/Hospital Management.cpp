#include <iostream>
using namespace std;

class Doctor {
public:
    virtual void treatPatient() {
        cout << "Generic treatment" << endl;
    }
};

class Dentist : public Doctor {
public:
    void treatPatient() override {
        cout << "Treating dental issues" << endl;
    }
};

class Cardiologist : public Doctor {
public:
    void treatPatient() override {
        cout << "Treating heart issues" << endl;
    }
};

int main() {
    Doctor* d;
    Dentist dn; Cardiologist c;
    d = &dn; d->treatPatient();
    d = &c; d->treatPatient();
    return 0;
}
