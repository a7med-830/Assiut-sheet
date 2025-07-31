#include <iostream>
using namespace std;
typedef long long ll;

ll pow(int base, int exp) {
    ll result = 1;
    while (exp != 0) {
        result *= base;
        --exp;
    }
    return result;
}

int main() {
    int x, n;
    cin >> x >> n;

    ll sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += pow(x, i);
    }

    cout << sum;
}