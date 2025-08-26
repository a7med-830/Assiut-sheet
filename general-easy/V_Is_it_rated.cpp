#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            cout << "rated" << endl;
            return 0;
        }
    }

    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            cout << "unrated" << endl;
            return 0;
        }
    }

    cout << "maybe" << endl;

    return 0;
}
