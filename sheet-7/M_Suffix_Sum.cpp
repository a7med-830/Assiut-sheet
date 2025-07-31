#include <iostream>
using namespace std;
typedef long long ll;

ll sumLastM(ll a[], int index, int m) {
    if (m == 0)
        return 0;
    return a[index] + sumLastM(a, index - 1, m - 1);
}

int main() {
    int n, m;
    cin >> n >> m;

    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << sumLastM(a, n - 1, m) << endl;
}
