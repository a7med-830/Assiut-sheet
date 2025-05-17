#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int counter = -1;
    bool dividable = true;
    while (dividable) {
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0 && a[i] > 0) {
                a[i] /= 2;
            }
            else {
                dividable = false;
                break;
            }
        }
        counter++;
    }

    cout << counter;
}