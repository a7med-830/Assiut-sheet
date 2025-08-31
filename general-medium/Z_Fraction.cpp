#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll a, b, c, d;
    char c0;

    cin >> a >> c0 >> b >> c >> c0 >> d;
    
    cout << lcm(a,c) << "/" << __gcd(b,d) << endl;
}