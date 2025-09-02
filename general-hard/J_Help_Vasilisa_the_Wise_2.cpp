#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2;
    cin >> c1 >> c2;
    cin >> d1 >> d2;

    for (int a = 1; a <= 9; a++) {
        for (int b = 1; b <= 9; ++b) {
            if (b == a)
                continue;
            for (int c = 1; c <= 9; c++) {
                if (c == a || c == b)
                    continue;
                for (int d = 1; d <= 9; d++) {
                    if (d == a || d == b || d == c)
                        continue;
                    if (a + b != r1)
                        continue;
                    if (c + d != r2)
                        continue;
                    if (a + c != c1)
                        continue;
                    if (b + d != c2)
                        continue;
                    if (a + d != d1)
                        continue;
                    if (b + c != d2)
                        continue;
                    cout << a << " " << b << "\n" << c << " " << d << "\n";
                    return 0;
                }
            }
        }
    }
    cout << -1 << "\n";
    return 0;
}