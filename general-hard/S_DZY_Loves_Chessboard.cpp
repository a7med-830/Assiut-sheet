#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int r, c;
    cin >> r >> c;
    char a[r][c];
    for (int i = 0; i < r; i++) {
        for (int z = 0; z < c; z++) {
            cin >> a[i][z];
        }
    }

    for (int i = 0; i < r; i++) {
        for (int z = 0; z < c; z++) {
            if (a[i][z] == '.') {
                if ((i + z) % 2 == 0) {
                    a[i][z] = 'B';
                }
                else {
                    a[i][z] = 'W';
                }
            }
        }
    }
    for (int i = 0; i < r; i++) {
        for (int z = 0; z < c; z++) {
            cout << a[i][z];
        }
        cout << endl;
    }
}