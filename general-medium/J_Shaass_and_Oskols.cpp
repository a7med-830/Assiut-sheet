#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;

    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int m, x, y;
    cin >> m;

    while (m--) {
        cin >> x >> y;

        if (x > 1)
            a[x - 1] += y - 1;
        if (x < n)
            a[x + 1] += a[x] - y;

        a[x] = 0;
    }

    for (int i = 1; i <= n; i++)
        cout << a[i] << "\n";
}