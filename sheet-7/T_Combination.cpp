#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int nCr(int n, int r) {
    if (n < r) return 0;
    if (r == 0) return 1;
    if (r == 1) return n;
    if (n == 1) return 1;

    return nCr(n-1, r-1) + nCr(n - 1, r); 
}

int main() {
    int n, r;
    cin >> n >> r;

    cout << nCr(n,r);
}