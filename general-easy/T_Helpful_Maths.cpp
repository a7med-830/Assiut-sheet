#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s;
    cin >> s;

    vector<int> a;
    for (int i = 0; i < s.length(); i++) 
        if (s[i] != '+') a.push_back(s[i] - '0');

    sort(a.begin(), a.end());

    for (int i = 0; i < a.size() - 1; i++)
        cout << a[i] << "+";
    
    cout << a[a.size() - 1];

}