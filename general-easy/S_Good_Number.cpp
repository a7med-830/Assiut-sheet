#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, k, res = 0;
    cin >> n >> k;

    while (n--) {
        string s;
        cin >> s;

        bool good = true;
        for (int i = 0; i <= k; i++) {
            if (s.find('0' + i) == string::npos) {
                good = false;
                break;
            }
        }

        if (good)
            res++;
    }

    cout << res;
}