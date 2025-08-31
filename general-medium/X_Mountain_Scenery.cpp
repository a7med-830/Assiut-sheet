#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, k;
    cin >> n >> k;
    int p = (n * 2) + 1;

    int a[p];

    for (int i = 0; i < p; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < p; i++) {
        if (a[i] > a[i - 1] + 1 && a[i] > a[i + 1] + 1) {
            a[i]--;
            k--;

            if (k == 0)
                break;
        }
    }

    for (int i = 0; i < p; i++) {
        cout << a[i] << ' ';
    }
}