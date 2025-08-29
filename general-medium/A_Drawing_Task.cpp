#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m, t;
    cin >> n >> m >> t;

    vector<vector<char>> a(n, vector<char>(m, '.'));

    while (t--) {
        int r1, c1, r2, c2;
        char l;
        cin >> r1 >> c1 >> r2 >> c2 >> l;

        r1--, c1--, r2--, c2--;
        if (r1 > r2) swap(r1, r2);
        if (c1 > c2) swap(c1, c2);

        for (int i = r1; i <= r2; i++) {
            for (int j = c1; j <= c2; j++) 
                a[i][j] = l;
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) 
            cout << a[i][j];
        cout << endl;
    }
}
