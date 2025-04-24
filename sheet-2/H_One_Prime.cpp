#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int check = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            check += i;
        }
    }

    if (check == n + 1) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}