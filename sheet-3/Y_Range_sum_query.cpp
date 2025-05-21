#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    long long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i < n; i++)
        arr[i] += arr[i - 1];

    while (q--) {
        int x, y;
        cin >> x >> y;
        long long sum = 0;
        if (x == 1)
            sum = arr[y - 1];
        else
            sum = arr[y - 1] - arr[x - 2];
            
        cout << sum << endl;
    }
}