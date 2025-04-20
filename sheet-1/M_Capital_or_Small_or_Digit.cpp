#include <iostream>
using namespace std;

int main() {
    char x;
    cin >> x;
    int ascii = int(x);
    if (ascii >= 65) {
        cout << "ALPHA\n";
        if (ascii <= 90) {
            cout << "IS CAPITAL\n";
        }
        else {
            cout << "IS SMALL\n";
        }
    }
    else {
        cout << "IS DIGIT\n";
    }
}