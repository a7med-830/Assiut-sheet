#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

bool isOdd(int n) { return n % 2; }

bool palindromeBinary(int n) {
    string bin = "";
    while (n > 0) {
        int bit = n % 2;
        bin.push_back('0' + bit);
        n /= 2;
    }

    string rev = bin;
    reverse(rev.begin(), rev.end());

    return (rev == bin);
}

int main() {
    int n;
    cin >> n;
    cout << ((isOdd(n) && palindromeBinary(n)) ? "YES" : "NO");
}