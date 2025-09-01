#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> grades(n);
    for (int i = 0; i < n; i++)
        cin >> grades[i];

    vector<bool> successful(n, false);

    for (int i = 0; i < m; i++) {
        int maxx = grades[0][i] - '0';
        for (int j = 1; j < n; j++) {
            maxx = max(maxx, grades[j][i] - '0');
        }

        for (int j = 0; j < n; j++) {
            if (grades[j][i] - '0' == maxx) {
                successful[j] = true;
            }
        }
    }

    int res = 0;
    for (int j = 0; j < n; j++)
        if (successful[j])
            res++;

    cout << res;
}
