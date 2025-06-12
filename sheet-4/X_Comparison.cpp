#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string res = s, sub1, sub2;

    for (int i = 0; i < s.length() - 1; i++) {
        sub1 += s[i];
        sub2 = s.substr(i + 1, s.length() - i);
        sort(sub1.begin(), sub1.end());
        sort(sub2.begin(), sub2.end());

        res = min(res, sub1+ sub2);
    }

    cout << res;
}