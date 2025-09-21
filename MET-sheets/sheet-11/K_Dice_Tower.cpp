#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t, x;
    cin >> t >> x;
    
    int y = 7 - x;

    bool flag = true;
    while (t-- && flag) {
        int a, b;
        cin >> a >> b;

        int c = 7 - a;
        int d = 7 - b;

        if (x == a || x == b || x == c || x == d || y == a || y == b || y == c || y == d) flag = false;

        x = y;
        y = 7 - x;
    }

    cout << ((flag) ? "YES" : "NO");
}