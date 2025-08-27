#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int r, c;
    cin >> r >> c;

    char cake[15][15];
    bool rowHasStrawberry[15] = {false};
    bool colHasStrawberry[15] = {false};

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> cake[i][j];
            if (cake[i][j] == 'S') {
                rowHasStrawberry[i] = true;
                colHasStrawberry[j] = true;
            }
        }
    }

    int eaten = 0;
    for (int i = 0; i < r; i++) {
        if (!rowHasStrawberry[i]) {
            for (int j = 0; j < c; j++) {
                if (cake[i][j] == '.') {
                    eaten++;
                    cake[i][j] = '#';
                }
            }
        }
    }

    for (int j = 0; j < c; j++) {
        if (!colHasStrawberry[j]) {
            for (int i = 0; i < r; i++) {
                if (cake[i][j] == '.') {
                    eaten++;
                    cake[i][j] = '#';
                }
            }
        }
    }

    cout << eaten;
}
