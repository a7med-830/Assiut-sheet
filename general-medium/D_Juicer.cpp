#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, b, d, res = 0;
    cin >> n >> b >> d;

    int a[n];
    int waste = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] > b) continue;
        waste += a[i];
        if (waste > d) {
            res++;
            waste = 0;
        }
    }
    
    cout << res;
}