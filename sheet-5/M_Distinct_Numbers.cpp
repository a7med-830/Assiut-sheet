#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int distinct(int a[], int n) {
    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (a[i]!= a[i-1]) {
            counter++;
        }
    }

    return counter;
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) 
        cin >> a[i];

    sort(a, a+n);
    
    cout << distinct(a, n);
}