#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[1000001] = {0};

int main() {
    a[1] = 1;

    for (ll i = 2; i * i <= 1000000; i++) {
        if (a[i] == 0) {
            for (ll z = i * i; z <= 1000000; z += i) 
                a[z] = 1;
        }
    }

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        ll x = sqrtl(n);

        cout << (((x * x) == n && a[x] == 0) ? "YES\n" : "NO\n");
    }
}
