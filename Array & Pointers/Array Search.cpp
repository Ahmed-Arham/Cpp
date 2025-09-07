#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 30, found = 0;
    for(int i = 0; i < 5; i++) {
        if(arr[i] == key) {
            found = 1;
            cout << "Found at index " << i;
            break;
        }
    }
    if(!found)
        cout << "Not found";
    return 0;
}