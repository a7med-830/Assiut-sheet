#include <iostream>
#include <iomanip>
using namespace std;
typedef long long ll;

ll res = 0;

void avg(ll a[], int n, int i) {
    if (i == n) {
        cout << fixed << setprecision(6) << (double)res / n;
        return;
    }
    res += a[i];
    i++;
    return avg(a, n, i);
}

int main() {
    int n, i = 0;
    cin >> n;

    ll a[n];
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    avg(a, n, i);
}