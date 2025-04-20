#include <iostream>
using namespace std;

int main() {
    char x;
    cin >> x;
    int ascii = int(x);
    if (ascii <= 90) {
        cout << char(ascii + 32);
    }
    else {
        cout << char(ascii - 32);
    }

}