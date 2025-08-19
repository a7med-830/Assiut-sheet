#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void add(int a[], int b[], int n) {
    for (int i = 0; i < n; i++)
        cout << b[i] << " ";

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main() {
    int n;
    cin >> n;

    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    add(a, b, n);
}