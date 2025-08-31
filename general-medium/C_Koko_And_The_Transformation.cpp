#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m, sum1 = 0, sum2 = 0;
    cin >> n >> m;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum1 += a[i];
    }

    int b[m];
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        sum2 += b[i];
    }

    cout << ((sum1 == sum2) ? "Yes" : "No");
}