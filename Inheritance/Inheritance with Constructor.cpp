#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        cout << "Person Constructor" << endl;
    }
};

class Student : public Person {
public:
    Student() {
        cout << "Student Constructor" << endl;
    }
};

int main() {
    Student s;
    return 0;
}
