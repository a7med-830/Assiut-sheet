#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    ll x, S = 0;
    cin >> x;

    for (ll val : a) S += val;
    
    ll full_cycles = x / S;
    ll sum = full_cycles * S;
    ll k = full_cycles * n;
    
    for (int i = 0; i < n; i++) {
        sum += a[i];
        k++;
        if (sum > x) {
            cout << k << "\n";
            return 0;
        }
    }
}