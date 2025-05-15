#include <iostream>
using namespace std;

bool areEqual(long long a[], long long b[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    long long a[n];
    long long rev_a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        rev_a[n - (i + 1)] = a[i];
    }

    (areEqual(a, rev_a, n)) ? cout << "YES" : cout << "NO";
}