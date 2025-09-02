#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, k;
    cin >> n >> k;

    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string base = alphabet.substr(0, k);

    string password;
    for (int i = 0; i < n; i++) {
        password += base[i % k];
    }

    cout << password << "\n";
}