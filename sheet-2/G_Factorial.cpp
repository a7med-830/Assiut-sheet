#include <iostream>
using namespace std;

int main() {
    short testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++) {
        long long res = 1;
        short n;
        cin >> n;

        for (int i = n; i > 0; i--) {
            res *= i;
        }

        cout << res << endl;
    }
}