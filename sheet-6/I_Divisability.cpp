#include <iostream>
using namespace std;
typedef long long ll;

ll sum(ll n) { return n * (n + 1) / 2; }

int main() {
    int a, b, x;
    cin >> a >> b >> x;
    ll sum1 = 0;
    
    ll ma = max(a, b);
    ll mi = min(a, b);
    sum1 = sum(ma / x) * x - sum((mi - 1) / x) * x;
    cout << sum1;
}
