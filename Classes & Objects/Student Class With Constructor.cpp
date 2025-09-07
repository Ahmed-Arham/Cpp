#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
public:
    // Constructor to initialize student details
    Student(string n, int r) {
        name = n;
        rollNo = r;
        cout << "Student object created for " << name << endl;
    }
    // Destructor
    ~Student() {
        cout << "Student object for " << name << " destroyed." << endl;
    }
    void display() {
        cout << "Name: " << name << ", Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s1("Alice", 101);
    s1.display();
    return 0;
}