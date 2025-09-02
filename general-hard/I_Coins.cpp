#include <bits/stdc++.h>
using namespace std;

int main() {
    map<char, int> l = {{'A', 0}, {'B', 0}, {'C', 0}};

    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;

        if (s[1] == '>') {
            l[s[0]]++;
        }
        else {
            l[s[2]]++;
        }
    }

    vector<pair<char, int>> vec(l.begin(), l.end());

    sort(vec.begin(), vec.end(), [](auto &a, auto &b) { return a.second < b.second; });

    if (vec[0].second == vec[1].second || vec[1].second == vec[2].second) {
        cout << "Impossible\n";
    }
    else {
        for (auto &p : vec)
            cout << p.first;
    }
}
