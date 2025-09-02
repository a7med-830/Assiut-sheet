#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    double L, s1, s2, Q;
    cin >> L >> s1 >> s2 >> Q;
    for (int i = 0; i < Q; i++) {
        double q;
        cin >> q;
        double time = sqrt(2) * (L - sqrt(q)) / (s2 - s1);
        cout << fixed << setprecision(6) << abs(time) << endl;
    }
}