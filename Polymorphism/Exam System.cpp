#include <iostream>
using namespace std;

class Exam {
public:
    virtual void startExam() {
        cout << "Starting generic exam" << endl;
    }
};

class OnlineExam : public Exam {
public:
    void startExam() override {
        cout << "Online exam started (proctored)" << endl;
    }
};

class OfflineExam : public Exam {
public:
    void startExam() override {
        cout << "Offline exam started in classroom" << endl;
    }
};

int main() {
    Exam* e;
    OnlineExam oe; OfflineExam of;
    e = &oe; e->startExam();
    e = &of; e->startExam();
    return 0;
}
