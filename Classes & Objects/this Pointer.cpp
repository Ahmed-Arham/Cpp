#include <iostream>
using namespace std;

class SimpleClass {
private:
    int data;
    
public:
    // Constructor using this pointer
    SimpleClass(int data) {
        this->data = data; // Using this to distinguish parameter from member
        cout << "Constructor: this = " << this << endl;
    }
    
    // Display function using this
    void display() {
        cout << "Data: " << this->data << endl;
        cout << "Address of object: " << this << endl;
    }
    
    // Function returning current object
    SimpleClass* getAddress() {
        return this;
    }
    
    // Function returning reference to current object
    SimpleClass& getReference() {
        return *this;
    }
};

int main() {
    SimpleClass obj1(100);
    SimpleClass obj2(200);
    
    cout << "Object 1:" << endl;
    obj1.display();
    cout << "Address from getAddress(): " << obj1.getAddress() << endl;
    
    cout << "\nObject 2:" << endl;
    obj2.display();
    cout << "Address from getAddress(): " << obj2.getAddress() << endl;
    
    return 0;
}
