#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, res = 0;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1])
            res++;
    }

    cout << res;
}