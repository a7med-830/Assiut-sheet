#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll e, m, b;
    cin >> e >> m >> b;
    if (e == 0 || b == 0) {
        cout << 0;
        return 0;
    }
    if (m == 0) {
        cout << min(e / 2, b);
    }
    else if (e > m) {
        if (b > (e - m) / 2) {
            cout << min(b - (e - m) / 2, m) + (e - m) / 2;
        }
        else {
            cout << min(b, m);
        }
    }
    else {
        ll minn = min(e, m);
        cout << min(minn, b);
    }
}