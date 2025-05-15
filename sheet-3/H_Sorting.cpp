#include <iostream>
using namespace std;

void sort(short a[], short n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                a[j + 1] = a[j + 1] + a[j];
                a[j] = a[j + 1] - a[j];
                a[j + 1] = a[j + 1] - a[j];
            }
        }
    }
}

int main() {
    short n;
    cin >> n;

    short a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}