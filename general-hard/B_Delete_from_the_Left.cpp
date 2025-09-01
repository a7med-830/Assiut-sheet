#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    ll mv = 0;
    ll i = s1.size() - 1, j = s2.size() - 1;

    while (i >= 0 && j >= 0 && s1[i] == s2[j]) {
        i--;
        j--;
    }

    mv = (i + 1) + (j + 1);

    cout << mv << "\n";
}
