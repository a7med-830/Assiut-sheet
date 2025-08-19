#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int s = 501;

void swapRow(int a[s][s], int n, int x, int y) {
    for (int i = 0; i < n; i++)
        swap(a[x][i], a[y][i]);
}

void swapColumn(int a[s][s], int n, int x, int y) {
    for (int i = 0; i < n; i++)
        swap(a[i][x], a[i][y]);
}

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    x--;
    y--;

    int a[s][s];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    swapRow(a, n, x, y);
    swapColumn(a, n, x, y);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}