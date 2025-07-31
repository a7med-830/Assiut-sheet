#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int binary(int &n, string &s) {
    if (n == 0) 
        return 0;
    s.push_back(n%2 + '0');
    n /= 2;
    return binary(n, s);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s = "";
        binary(n, s);
        reverse(s.begin(), s.end());
        cout << s << endl;
    } 
}