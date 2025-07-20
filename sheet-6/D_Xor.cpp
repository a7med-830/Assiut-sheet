#include <iostream>
#define ll long long
using namespace std;

ll XOR(ll a, ll b, ll q) {
    ll mod = q % 3;
    if (mod == 1) return a;
    if (mod == 2) return b;
    return a ^ b;
}

int main() {
    ll a, b, q;
    cin >> a >> b >> q;
    cout << XOR(a, b, q) << endl;
}
