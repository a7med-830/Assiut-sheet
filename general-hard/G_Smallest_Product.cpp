#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll s;
    cin >> s;
    double sum = 0;
    for (int i = 0; i < s; i++) {
        ll product;
        cin >> product;
        sum += log10(product);
    }
    double res = sum / s;
    cout << (ll)pow(10, res) + 1;
}