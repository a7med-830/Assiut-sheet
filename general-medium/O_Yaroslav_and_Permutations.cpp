#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[1000];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int freq[1001] = {0};
    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }

    int maxFreq = 0;
    for (int i = 0; i <= 1000; i++) {
        maxFreq = max(maxFreq, freq[i]);
    }

    if (maxFreq > (n + 1) / 2) {
        cout << "NO"; 
    }
    else {
        cout << "YES";
    }

    return 0;
}
