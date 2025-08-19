#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void shift(int a[], int n, int x) {
    for (int i = 0; i < x; i++) {
        int last = a[n-1];

        for (int j = n - 1; j > 0; j--) 
            a[j] = a[j - 1];

        a[0] = last;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}   

int main() {
    int n, x;
    cin >> n >> x;

    int a[n];
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    x %=n;

    shift(a, n , x);

}