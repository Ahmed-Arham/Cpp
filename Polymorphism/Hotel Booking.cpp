#include <iostream>
using namespace std;

class Hotel {
public:
    virtual void bookRoom() {
        cout << "Booking generic hotel room" << endl;
    }
};

class LuxuryHotel : public Hotel {
public:
    void bookRoom() override {
        cout << "Luxury suite booked" << endl;
    }
};

class BudgetHotel : public Hotel {
public:
    void bookRoom() override {
        cout << "Budget room booked" << endl;
    }
};

int main() {
    Hotel* h;
    LuxuryHotel l; BudgetHotel b;
    h = &l; h->bookRoom();
    h = &b; h->bookRoom();
    return 0;
}
