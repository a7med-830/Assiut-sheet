#include <iostream>
using namespace std;
typedef long long ll;

int n, target;
int a[20];
bool found = false;

void solve(int i, ll sum) {
    if (found)
        return;

    if (i == n) {
        if (sum == target)
            found = true;
        return;
    }

    solve(i + 1, sum + a[i]);

    solve(i + 1, sum - a[i]);
}

int main() {
    cin >> n >> target;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    solve(0, 0);

    cout << (found ? "YES" : "NO") << endl;
    return 0;
}
