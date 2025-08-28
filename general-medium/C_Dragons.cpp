#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int s, n;
    cin >> s >> n;

    vector<vector<int>> arr(n, vector<int>(2));

    for (int i = 0; i <= n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    sort(arr.begin(), arr.end(), [](const vector<int> &a, const vector<int> &b) {
        return a[0] < b[0]; 
    });

    for (int i = 0; i < n; i++) {
        if (s <= arr[i][0]) {
            cout << "NO";
            return 0;
        }
        s += arr[i][1];
    }
    cout << "YES";
}