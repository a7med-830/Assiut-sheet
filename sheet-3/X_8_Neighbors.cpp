#include <iostream>
using namespace std;

int main() {
    short n, m, x, y;
    cin >> n >> m;

    char a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cin >> x >> y;
    x--;
    y--;

    for (int i = x - 1; i <= x + 1; i++) {
        for (int j = y - 1; j <= y + 1; j++) {
            if (i == x && j == y)
                continue;
            if (i >= 0 && i < n && j >= 0 && j < m) {
                if (a[i][j] != 'x') {
                    cout << "no";
                    return 0;
                }
            }
        }
    }
    cout << "yes";
}