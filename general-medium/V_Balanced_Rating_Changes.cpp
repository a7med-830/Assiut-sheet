#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];

        b[i] = a[i] / 2; 
        if (a[i] < 0 && a[i] % 2) 
            b[i]--;

        sum += b[i];
    }

    for (int i = 0; i < n && sum < 0; i++) {
        if (abs(a[i]) % 2 == 1) {
            b[i]++; 
            sum++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << b[i] << "\n";
    }

    return 0;
}
