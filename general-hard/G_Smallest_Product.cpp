#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; 
    cin >> n;
    
    vector<int> a(n);
    ll product = 1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        product *= a[i];
    }
    
    sort(a.begin(), a.end());
    
    for (int i = 0; i < n; i++) {
        if (pow(a[i], n) > product) {
            cout << a[i] << endl;
            return 0;
        }
    }

}