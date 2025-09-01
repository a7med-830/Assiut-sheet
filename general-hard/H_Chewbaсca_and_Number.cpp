#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string n;
    cin >> n;

    for (int i = 0; i < n.length(); i++) {
        int inverted = 9 - (n[i] - '0');
        if (n[i] - '0' > inverted) {
            if (!(i == 0 && inverted == 0))
                cout << inverted;
            else
                cout << n[i];
        }
        else 
            cout << n[i];
    }
}