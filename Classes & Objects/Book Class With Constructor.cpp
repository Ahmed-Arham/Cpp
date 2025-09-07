#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
public:
    // Constructor
    Book(string t, string a) : title(t), author(a) {
        cout << "Book object created: " << title << " by " << author << endl;
    }
    // Destructor
    ~Book() {
        cout << "Book object destroyed: " << title << endl;
    }
    void display() {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

int main() {
    Book b1("The Hitchhiker's Guide to the Galaxy", "Douglas Adams");
    b1.display();
    return 0;
}