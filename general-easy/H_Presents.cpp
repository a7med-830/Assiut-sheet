#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> p(n + 1);   
    vector<int> ans(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        ans[p[i]] = i; 
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}