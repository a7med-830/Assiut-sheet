#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    string s;
    cin >> s;
    
    string r = s;

    reverse(r.begin(), r.end());

    if (s != r) {
        cout << s.size() << endl;
        return 0;
    }

    for (int i = 1; i < s.size(); i++) {
        if (s[i] != s[i - 1]) {
            cout << s.size() - 1 << endl;
            return 0;
        }
    }

    cout << 0 << endl;
}