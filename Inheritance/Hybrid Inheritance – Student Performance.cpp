#include <iostream>
using namespace std;

class Student {
protected:
    string name;
public:
    void inputName() {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Test : public Student {
protected:
    int marks;
public:
    void inputMarks() {
        cout << "Enter test marks: ";
        cin >> marks;
    }
};

class ExtraCurricular {
protected:
    int score;
public:
    void inputScore() {
        cout << "Enter extracurricular score: ";
        cin >> score;
    }
};

class Result : public Test, public ExtraCurricular {
public:
    void display() {
        cout << "Student: " << name << endl;
        cout << "Total Performance = " << (marks + score) << endl;
    }
};

int main() {
    Result r;
    r.inputName();
    r.inputMarks();
    r.inputScore();
    r.display();
    return 0;
}
