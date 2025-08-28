#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;

    int a[m];
    for (int i = 0; i < m; i++) 
    cin >> a[i];
    
    sort(a, a + m);
    
    int minn = INT_MAX;
    for (int i = 0; i + n - 1 < m; i++)
        minn = min(minn, abs(a[i+n-1] - a[i]));

    cout << minn;
}