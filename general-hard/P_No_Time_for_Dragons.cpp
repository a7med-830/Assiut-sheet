#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll s;
    cin >> s;
    vector<pair<long, pair<long, long>>> v(s);

    for (int i = 0; i < s; i++) {
        ll n1, n2;
        cin >> n1 >> n2;
        v[i].first = (n1 - n2);
        v[i].second = {n1, n2};
    }
    sort(v.begin(), v.end());
    ll total = v[s - 1].second.first;
    ll sol = v[s - 1].second.first - v[s - 1].second.second;

    for (int i = s - 2; i >= 0; i--) {
        if (sol < v[i].second.first) {
            total += v[i].second.first - sol;
            sol = v[i].second.first;
            sol -= v[i].second.second;
        }
        else {
            sol -= v[i].second.second;
        }
    }
    cout << total;
}