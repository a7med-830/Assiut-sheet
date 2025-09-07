#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s;
    cin >> s;

    while (!s.empty() && s.back() == '0') 
        s.pop_back();

    string r = s;
    reverse(r.begin(), r.end());

    cout << ((r == s) ? "Yes" : "No");
}