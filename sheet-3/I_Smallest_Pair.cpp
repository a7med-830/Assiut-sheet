#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long a[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        long long ans = LONG_LONG_MAX;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                ans = min(ans, a[i] + a[j] + (j + 1) - (i + 1));

            }
        }
        cout << ans << endl;
    }
}