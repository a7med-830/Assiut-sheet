#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    int t;
    cin >> t;

    while (t--) {
        int ma_x = max({x1, x2, x3, x4});
        int mi_x = min({x1, x2, x3, x4});
        int ma_y = max({y1, y2, y3, y4});
        int mi_y = min({y1, y2, y3, y4});

        int x, y;
        cin >> x >> y;

        if (x >= mi_x && x <= ma_x && y >= mi_y && y <= ma_y) 
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}