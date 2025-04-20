#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;
    int num = int(n[0]);

    if (num%2) {
        cout << "ODD";
    }
    else {
        cout << "EVEN";
    }
}