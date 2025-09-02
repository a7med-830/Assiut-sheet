#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, mo = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0;
    for (int i = 0; i < n; i++) {
        l = max(l, a[i]);
        if (i + 1 == l) {
            mo++;
        }
    }

    cout << mo << endl;
}