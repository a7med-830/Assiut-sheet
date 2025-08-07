#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t, c = 1;
    cin >> t;

    while (t--) {
        int n, x1, y1, x2, y2;
        cin >> n;
        cin >> x1 >> y1 >> x2 >> y2;

        int ma_x = x1, mi_x = x2, ma_y = y1, mi_y = y2;

        for (int i = 1; i < n; i++) {
            cin >> x1 >> y1 >> x2 >> y2;

            ma_x = max(ma_x, x1);
            ma_y = max(ma_y, y1);

            mi_x = min(mi_x, x2);
            mi_y = min(mi_y, y2);
        }

        if (mi_x > ma_x && mi_y > ma_y)
            cout << "Case #" << c << ": " << (mi_x - ma_x) * (mi_y - ma_y) << endl;
        else
            cout << "Case #" << c << ": " << 0 << endl;
        c++;
    }
}