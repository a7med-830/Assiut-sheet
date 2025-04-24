#include <iostream>
using namespace std;

int main() {
    while (true) {
        short pass;
        cin >> pass;

        if (pass == 1999) {
            cout << "Correct\n";
            break;
        }
        else {
            cout << "Wrong\n";
        }
    }
    
}