#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        ll n, s;
        cin >> n >> s;

        if (n >= s) {
            cout << 1 << " " << s << endl;
            continue;
        }

        if (s > n * (n + 1) / 2) {
            cout << -1 << endl;
            continue;
        }

        vector<int> a;
        for (int i = n; i > 0; i--) {
            if (s >= i) {
                a.push_back(i);
                s -= i;
            }
            if (s == 0) break;
        }

        if (s != 0) 
            cout << -1 << endl;
        else {
            cout << a.size() << " " ;
            for (int i = 0; i < a.size() - 1; i++) {
                cout << a[i] << " ";
            }
            cout << a[a.size() - 1] << endl;
        }
    }
}