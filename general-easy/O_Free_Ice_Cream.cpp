#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    ll total;
    int dis = 0;
    cin >> t >> total;

    while (t--) {
        char a;
        ll b;
        cin >> a >> b;

        if (a == '+') {
            total += b;
        }
        else {
            if (total < b)
                dis++;
            else
                total -= b;
        }
    }

    cout << total << " " << dis;
    return 0;
}
