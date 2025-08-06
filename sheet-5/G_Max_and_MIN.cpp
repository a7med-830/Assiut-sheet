#include <algorithm>
#include <iostream>
using namespace std;

pair<int, int> minAndMax(int a[], int n) {
    int mi = a[0];
    int ma = a[0];
    for (int i = 0; i < n; i++) {
        mi = min(mi, a[i]);
        ma = max(ma, a[i]);
    }
    return {mi, ma};
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    pair<int, int> result = minAndMax(a, n);
    cout << result.first << " " << result.second;
}
