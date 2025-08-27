#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr1[50001], arr2[50001], arr3[50001];

int main() {
    int n, temp, a = 0, b = 0, c = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp == 1) {
            arr1[a] = i;
            a++;
        }
        else if (temp == 2) {
            arr2[b] = i;
            b++;
        }
        else {
            arr3[c] = i;
            c++;
        }
    }

    cout << min({a, b, c}) << endl;

    for (int i = 0; i < min({a, b, c}); i++) {
        cout << arr1[i] + 1 << ' ' << arr2[i] + 1 << ' ' << arr3[i] + 1 << endl;
    }
}