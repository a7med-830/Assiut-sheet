#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s;
    int k, c = 0;
    cin >> s >> k;

    for (auto e : s) {
        c += (e != '?' && e != '*');
    }

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '*' && c < k) {
            s.insert(i, k - c, s[i - 1]);
            c = k;
        }
        else if (s[i] == '?' || s[i] == '*') {
            s.erase(i--, 1);
            if (c > k) {
                s.erase(i--, 1), c--;
            }
        } 
    }
    cout << ((k == c) ? s : "Impossible");
}