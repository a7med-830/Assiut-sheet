#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, target;
int a[25];

bool solve(int i, ll sum) {
    if (i == n)
        return sum == target;

    bool plus = solve(i + 1, sum + a[i]);

    bool minus = solve(i + 1, sum - a[i]);

    return plus || minus;
}

int main() {
    cin >> n >> target;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (solve(1, a[0]))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
