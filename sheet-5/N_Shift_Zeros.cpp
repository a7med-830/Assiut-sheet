#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void shift(int a[], int n) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) c++;
        else cout << a[i] << " ";
    }

    for (int i = 0; i < c; i++) 
        cout << 0 << " ";
}

int main() {
    int n; 
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    shift(a, n);
}