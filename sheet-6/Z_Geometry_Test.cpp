#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    double c, s;
    cin >> c >> s;

    if (s >= c * 2) cout << "Square";
    else if (c * 2 > sqrt(pow(s, 2) + pow(s, 2))) cout << "Circle";
    else cout << "Complex";
}