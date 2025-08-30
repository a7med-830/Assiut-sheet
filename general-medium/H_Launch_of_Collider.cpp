#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; 
    string s;
    cin >> n >> s;

    ll a[n];
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    ll t = 0, mi = LONG_LONG_MAX;
    for (int i = 0; i < n -1; i++) {
        if (s[i] == 'R' && s[i + 1] == 'L') {
            t = (a[i + 1] - a[i]) / 2;
            if (t < mi) mi = t;
        }
    }
    cout << (mi == LONG_LONG_MAX ? -1 : mi); 
}