#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;

    int minMoves = ceil(n / 2.0);
    int answer = -1;

    for (int i = minMoves; i <= n; i++) {
        if (i % m == 0) {
            answer = i;
            break;
        }
    }

    cout << answer;
}