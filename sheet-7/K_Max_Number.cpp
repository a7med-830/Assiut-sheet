#include <climits>
#include <iostream>
using namespace std;
typedef long long ll;

ll ma = LLONG_MIN;

void maxInArray(ll a[], int n, int i) {
    if (i == n)
        return;

    ma = max(a[i], ma);
    maxInArray(a, n, i + 1); 
}

int main() {
    int n;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    maxInArray(a, n, 0);
    cout << ma << endl;
}
