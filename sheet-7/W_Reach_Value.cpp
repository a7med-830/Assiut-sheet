#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;

bool reachValue(ll x) {
    if (n < x) return false;
    if (n == x) return true;

    bool route1 = reachValue(x*10);
    bool route2 = reachValue(x*20);

    return route1 || route2;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        cin >> n;
        cout << (reachValue(1) ? "YES\n" : "NO\n");
    }
}