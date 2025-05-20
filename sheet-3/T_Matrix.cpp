#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // i, i
    // i, n - i + 1

    short n;
    cin >> n;
    
    int a[n][n];
    int primary = 0, secondary = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        primary += a[i][i];
        secondary += a[i][n - (i + 1)];
    }

    cout << abs(primary - secondary);
}