#include <iostream>
using namespace std;

class Academics {
protected:
    int marks;
public:
    void inputAcademics() {
        cout << "Enter academic marks: ";
        cin >> marks;
    }
};

class Sports {
protected:
    int score;
public:
    void inputSports() {
        cout << "Enter sports score: ";
        cin >> score;
    }
};

class Result : public Academics, public Sports {
public:
    void displayResult() {
        cout << "Total = " << marks + score << endl;
    }
};

int main() {
    Result r;
    r.inputAcademics();
    r.inputSports();
    r.displayResult();
    return 0;
}
