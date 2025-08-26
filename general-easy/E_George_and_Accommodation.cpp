#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int t, b = 0;
    cin >> t;

    while(t--) {
        int p, q;
        cin >> p >> q;

        if (q - p >= 2) 
            b++;
    }
        
    cout << b;
}