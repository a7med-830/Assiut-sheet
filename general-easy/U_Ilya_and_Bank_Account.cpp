#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;

    if (n >= 0) {
        cout << n;
        return 0;
    }

    ll LDR = n / 10;
    ll LD = n % 10;
    ll temp = n / 100;
    ll DBLDR = (temp * 10) + LD;

    ll res = max(LDR, DBLDR);
    cout << res;
}