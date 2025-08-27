#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;

    int officers = 0, untreated = 0;
    while (t--) {
        int n;
        cin >> n;
        if (n > 0) {
            officers += n;
        }
        else {
            if (officers > 0) {
                officers--;
            }
            else {
                untreated++;
            }
        }
    }

    cout << untreated;
}
