#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int b;
    cin >> b;

    if (a % b == 0 || b % a == 0) {
        cout << "Multiples";
    }
    else {
        cout << "No Multiples";
    }
}