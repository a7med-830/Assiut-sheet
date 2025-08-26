#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int n, s = 0, d = 0;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int i = 0, j = n - 1;
    bool s_playing = true;
    while (i <= j) {
        int big_card = max(a[i], a[j]);

        if (s_playing) {
            s += big_card;
            s_playing = false;
        }
        else {
            d += big_card;
            s_playing = true;
        }

        if (a[i] == big_card)
            i++;
        else if (a[j] == big_card)
            j--;
    }

    cout << s << " " << d;
}