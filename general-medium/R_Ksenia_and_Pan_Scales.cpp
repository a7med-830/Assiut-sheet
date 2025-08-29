#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string scale, weights;
    cin >> scale >> weights;

    auto delimiter = find(scale.begin(), scale.end(), '|');
    int l = distance(scale.begin(), delimiter);
    int r = distance(delimiter, scale.end()) - 1;

    while (!weights.empty()) {
        if (l < r) {
            scale = weights.back() + scale;
            weights.pop_back();
            l++;
        }
        else if (r < l) {
            scale = scale + weights.back();
            weights.pop_back();
            r++;
        }
        else {
            scale = weights.back() + scale;
            weights.pop_back();
            l++;
        }
    }

    cout << ((l == r) ? scale : "Impossible");
}
