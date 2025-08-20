#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[11][11], n, m;

ll sum(int x, int y) {
    if (x == n - 1 && y == m - 1)
        return a[x][y];
    else if (x == n + 1 || y == m + 1)
        return INT_MIN;

    int right = sum(x, y + 1);
    int down = sum(x + 1, y);

    return a[x][y] + max(right, down);
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }

    cout << sum(0, 0) << endl;
}