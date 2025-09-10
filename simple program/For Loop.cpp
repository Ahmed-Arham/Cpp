#include <iostream>
using namespace std;

int main() {
    char grade = 'B';
    switch(grade) {
        case 'A': cout << "Excellent"; break;
        case 'B': cout << "Good"; break;
        case 'C': cout << "Average"; break;
        default: cout << "Invalid grade";
    }
    return 0;

}

