#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    string stones, inst;
    cin >> stones >> inst;

    int pos = 0;
    for (int i = 0; i < inst.length(); i++) {
        if (stones[pos] == inst[i]) pos++;
    }

    cout << pos + 1;
}