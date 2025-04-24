#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, r;
    cin >> n;
    int original = n;

    while (n != 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }

    cout << rev << endl;
    if (original == rev) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}