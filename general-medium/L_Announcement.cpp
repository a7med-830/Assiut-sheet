#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, res = 0;
    cin >> n;

    int freq[1000001] = {0};
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        if (freq[p] == 0)
            freq[p]++;
        else
            res++;
    }

    cout << (res != 0 ? res : -1);
}