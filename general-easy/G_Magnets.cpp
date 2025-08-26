#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    string prev, curr;
    int groups = 1;

    cin >> prev;

    for (int i = 1; i < t; i++) {
        cin >> curr;
        if (curr != prev) {
            groups++;
        }
        prev = curr;
    }

    cout << groups;
}
