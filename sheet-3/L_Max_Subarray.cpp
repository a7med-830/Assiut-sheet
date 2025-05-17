#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    short t;
    cin >> t;

    while (t--) {
        short n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int k = 1; k <= n; k++) {
            for (int i = 0; i <= n - k; i++) {
                int temp[k];
                for (int j = 0; j < k; j++) {
                    temp[j] = a[i + j];
                }
                cout << *max_element(temp, temp + k) << " ";
            }
        }
        cout << endl;
    }
}