#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    cin >> n;

    ll res = 0;
    for (ll i = 1; i * i <= n; i++) {
        if (n % i == 0){
            res += i;
            if (i != n / i)
                res += n / i;
        }
    }

    cout << res;
}