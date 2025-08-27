#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, i = 0;
    string s, res = "";
    cin >> n >> s;

    while (n) {
        if (n % 2 == 0) 
            res = s[i] + res;
        else 
            res = res + s[i];

        i++;
        n--;
    }

    cout << res << endl;
}