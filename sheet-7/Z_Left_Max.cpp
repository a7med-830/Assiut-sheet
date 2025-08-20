#include <bits/stdc++.h>
using namespace std;

int n, a[100009];

void left_max(int i, int maxx) {
    if (i == n)
        return; 

    maxx = max(maxx, a[i]); 
    cout << maxx << " ";    

    left_max(i + 1, maxx); 
}

int main() {
   
    cin >> n;

    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    left_max(0, INT_MIN);

    return 0;
}
