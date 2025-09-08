#include <iostream>
using namespace std;

class Order {
public:
    virtual void placeOrder() {
        cout << "Placing generic order" << endl;
    }
};

class FoodOrder : public Order {
public:
    void placeOrder() override {
        cout << "Food order placed on Zomato" << endl;
    }
};

class GroceryOrder : public Order {
public:
    void placeOrder() override {
        cout << "Grocery order placed on BigBasket" << endl;
    }
};

int main() {
    Order* o;
    FoodOrder f; GroceryOrder g;
    o = &f; o->placeOrder();
    o = &g; o->placeOrder();
    return 0;
}
