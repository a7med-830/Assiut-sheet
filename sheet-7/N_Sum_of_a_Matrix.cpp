#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int A[105][105], B[105][105], R, C;

void sumMatrix(int i, int j) {
    if (i == R)
        return;

    cout << A[i][j] + B[i][j] << " ";

    if (j + 1 < C) {
        sumMatrix(i, j + 1);
    }
    else {
        cout << "\n";
        sumMatrix(i + 1, 0);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> R >> C;

    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin >> A[i][j];

    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            cin >> B[i][j];

    sumMatrix(0, 0);

    return 0;
}
