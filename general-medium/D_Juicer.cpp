#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, b, d, res = 0;
    cin >> n >> b >> d;

    
    int orange;
    int waste = 0;
    for (int i = 0; i < n; i++){
        cin >> orange;
        if (orange > b) continue;
        waste += orange;
        if (waste > d) {
            res++;
            waste = 0;
        }
    }
    
    cout << res;
}