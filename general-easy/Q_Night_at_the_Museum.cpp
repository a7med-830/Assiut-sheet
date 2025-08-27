#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s;
    cin >> s;

    int current = 0;
    int total = 0;

    for (char c : s) {
        int target = c - 'a';
        int diff = abs(target - current);
        total += min(diff, 26 - diff);
        current = target;
    }

    cout << total;
}