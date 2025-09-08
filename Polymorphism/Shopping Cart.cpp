#include <iostream>
using namespace std;

class Item {
public:
    virtual void addToCart() {
        cout << "Generic item added" << endl;
    }
};

class Electronics : public Item {
public:
    void addToCart() override {
        cout << "Electronics item added to cart" << endl;
    }
};

class Clothing : public Item {
public:
    void addToCart() override {
        cout << "Clothing item added to cart" << endl;
    }
};

int main() {
    Item* i;
    Electronics e; Clothing c;
    i = &e; i->addToCart();
    i = &c; i->addToCart();
    return 0;
}
