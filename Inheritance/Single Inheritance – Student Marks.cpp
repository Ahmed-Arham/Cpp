#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int roll;
public:
    void inputStudent() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
    }
    void displayStudent() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

class Marks : public Student {
    int m1, m2, m3;
public:
    void inputMarks() {
        cout << "Enter marks in 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }
    void displayResult() {
        displayStudent();
        cout << "Total = " << (m1 + m2 + m3) << endl;
    }
};

int main() {
    Marks m;
    m.inputStudent();
    m.inputMarks();
    m.displayResult();
    return 0;
}
