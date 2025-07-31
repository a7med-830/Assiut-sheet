#include <iostream>
using namespace std;
typedef long long ll;

ll ma = LONG_LONG_MIN;

void maxInArray(ll a[], int n, int i) {
    if (i == n)
        return;
    ma = max(a[i], ma);
    i++;
    return maxInArray(a, n, i);
}

int main() {
    int n;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    
    int i = 1;
    maxInArray(a, n, i);
    cout << ma;
}