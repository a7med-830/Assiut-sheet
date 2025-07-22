#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int main() {
    string N;
    ll X;
    cin >> N >> X;

    ll rem = 0;

    for (char c : N) {
        rem = (rem * 10 + (c - '0')) % X;
    }

    if (rem == 0)
        cout << "YES";
    else
        cout << "NO";
}
