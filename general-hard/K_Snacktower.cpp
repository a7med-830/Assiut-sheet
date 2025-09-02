#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;

    cin >> n;
    vector<int> freq(n + 1);

    int current = n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        freq[num] = 1;

        while (freq[current] == 1) {
            cout << current << " ";
            current--;
        }

        cout << endl;
    }
}