#include <iostream>
using namespace std;
typedef long long ll;

ll log2floor(ll n) {
    if (n == 1)
        return 0;
    return 1 + log2floor(n / 2);
}

int main() {
    ll n;
    cin >> n;

    cout << log2floor(n) << endl;
}
