#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool isPrime(long long n) {
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    ll fib[51];
    fib[1] = 0;
    fib[2] = 1;
    for (int i = 3; i <= 50; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << (isPrime(fib[n]) ? "prime" : "not prime") << "\n";
    }
}
