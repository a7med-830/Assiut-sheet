#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;

    int a[n], total = 0;;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }
    
    sort(a, a+n, [](int a, int b){
        return a > b;
    });

    int coins = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        coins++;
        if (sum > total / 2) break;
    }
    
    cout << coins;
}