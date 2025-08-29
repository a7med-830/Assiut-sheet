#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        ll n, divisors = 0;
        cin >> n;
    
    
        for (int i = 2; i <= n / 2; i++)
            if (n % i == 0) divisors++;
    
        cout << ((divisors == 1) ? "YES" : "NO") << endl; 
    }
    

}