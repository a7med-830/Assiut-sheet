#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast

    int n, m, t;
    cin >> n >> m >> t;

    int farm[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> farm[i][j];
    }
    
    int row[n], col[m];
    for (int i = 0; i < n; i++)
        row[i] = i;
    for (int j = 0; j < m; j++)
        col[j] = j;

    while (t--) {
        char inst;
        int x, y;
        cin >> inst >> x >> y;
        x--, y--;

        if (inst == 'c') {
            swap(col[x], col[y]);
        }
        else if (inst == 'r') {
            swap(row[x], row[y]);
        }
        else if (inst == 'g') {
            cout << farm[row[x]][col[y]] << "\n";
        }
    }
}
