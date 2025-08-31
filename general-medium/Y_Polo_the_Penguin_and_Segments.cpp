#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, k;
    cin >> n >> k;

    ll s = 0;
    for (int i = 0; i < n; ++i) {
        ll l, r;
        cin >> l >> r;
        s += (r - l + 1);
    }

    ll rem = s % k;
    ll ans = (k - rem) % k;
    cout << ans << "\n";
}