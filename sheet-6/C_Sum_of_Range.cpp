#include <iostream>
#define ll long long
using namespace std;

ll sumFromAtoB(ll a, ll b) { 
    if (a > b) swap(a, b);
    return 1LL * (b - a + 1) * (a + b) / 2; 
}

ll sumFromAtoBEven(ll a, ll b) {
    if (a > b) swap(a, b);
    if (a % 2 != 0) a++;
    if (b % 2 != 0) b--;

    ll n = ((b - a) / 2) + 1;
    return 1LL * n * (a + b) / 2;
}

ll sumFromAtoBOdd(ll a, ll b) {
    if (a > b) swap(a, b);
    if (a % 2 == 0) a++;
    if (b % 2 == 0) b--;

    ll n = ((b - a) / 2) + 1;
    return 1LL * n * (a + b) / 2;
}

int main() {
    ll a, b;
    cin >> a >> b;

    cout << sumFromAtoB(a, b) << endl;
    cout << sumFromAtoBEven(a, b) << endl;
    cout << sumFromAtoBOdd(a, b) << endl;
}