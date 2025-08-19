#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

double average(double a[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];

    return sum / n;
}

int main() {
    int n;
    cin >> n;

    double a[n];
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    cout << fixed << setprecision(7) << average(a, n);
}