#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, d;
        cin >> n >> d;

        vector<int> a(n);
        bool flag = true;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] > d) {
                flag = false;
            }
        }

        if (flag) {
            cout << "YES\n";
            continue;
        }

        sort(a.begin(), a.end());

        cout << ((a[0] + a[1] <= d) ? "YES\n" : "NO\n");
    }
}
