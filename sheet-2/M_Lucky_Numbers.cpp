#include <iostream>
using namespace std;

bool check(int n) {
    while (n != 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7)
            return false;
        n /= 10;
    }
    return true;
}

int main() {
    int a, b;
    bool found = false;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        if (check(i)) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << -1;
    }
}