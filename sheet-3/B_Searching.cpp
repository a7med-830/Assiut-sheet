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

    long long target;
    cin >> target;

    bool found = false;
    int pos;

    for (int i = 0; i < n; i++) {
        if (a[i] == target) {
            found = true;
            pos = i;
            break;
        }
    }

    (found) ? cout << pos : cout << -1;
}