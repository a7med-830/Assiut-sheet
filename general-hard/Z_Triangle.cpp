#include <bits/stdc++.h>
using namespace std;

bool check(int a1, int a2, int b1, int b2, int c1, int c2) {
    if ((a1 == b1 && a2 == b2) || (a1 == c1 && a2 == c2) ||
        (b1 == c1 && b2 == c2))
        return false;

    int d1 = (a1 - b1) * (a1 - b1) + (a2 - b2) * (a2 - b2);
    int d2 = (c1 - a1) * (c1 - a1) + (c2 - a2) * (c2 - a2);
    int d3 = (b1 - c1) * (b1 - c1) + (b2 - c2) * (b2 - c2);

    int a[3] = {d1, d2, d3};
    sort(a, a + 3);

    return (a[0] + a[1] == a[2]);
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if (check(x1, y1, x2, y2, x3, y3)) {
        cout << "RIGHT" << endl;
        return 0;
    }

    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};

    for (int i = 0; i < 4; i++) {
        if (check(x1 + dx[i], y1 + dy[i], x2, y2, x3, y3)) {
            cout << "ALMOST" << endl;
            return 0;
        }

        if (check(x1, y1, x2 + dx[i], y2 + dy[i], x3, y3)) {
            cout << "ALMOST" << endl;
            return 0;
        }

        if (check(x1, y1, x2, y2, x3 + dx[i], y3 + dy[i])) {
            cout << "ALMOST" << endl;
            return 0;
        }
    }

    cout << "NEITHER" << endl;
}
