#include <iostream>
using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin >> n;

    ll low = 1, high = 2e9, ans = 0;

    while (low <= high) {
        ll mid = (low + high) / 2;
        ll sum = mid * (mid + 1) / 2;

        if (sum <= n) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << ans << endl;
}
