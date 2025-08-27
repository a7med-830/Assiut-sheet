#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;

    if (n == 0) {
        cout << 1;
        return 0;
    }

    int rem = n % 4;
    if (rem == 1) cout << 8;
    else if (rem == 2) cout << 4;
    else if (rem == 3) cout << 2;
    else if (rem == 0) cout << 6;
}