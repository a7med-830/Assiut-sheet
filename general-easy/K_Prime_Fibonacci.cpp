// #include <bits/stdc++.h>

// using namespace std;
// typedef long long ll;

// bool isPrime(long long n) {
//     if (n <= 1)
//         return false;
//     if (n == 2)
//         return true;
//     if (n % 2 == 0)
//         return false;
//     for (int i = 3; i * i <= n; i += 2) {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

// int main() {
//     ll fib[51];
//     fib[1] = 0;
//     fib[2] = 1;
//     for (int i = 3; i <= 50; i++) {
//         fib[i] = fib[i - 1] + fib[i - 2];
//     }

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         cout << (isPrime(fib[n]) ? "prime" : "not prime") << "\n";
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;

// ll fibonacci(ll n) {
//     if (n == 1)
//         return 0;
//     if (n == 2)
//         return 1;
//     return fibonacci(n - 1) + fibonacci(n - 2);
// }

// int isPrime(ll n) {
//     if (n == 0 || n == 1) return 0;

//     for (int i = 2; i <= sqrt(n); i++) {
//         if (n % i == 0)
//             return 0;
//     }
//     return 1;
// }

// int main() {
//     for (int i = 1; i <= 51; i++) {
//         cout << isPrime(fibonacci(i)) << ",";
//     }
// } 

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int primes[51] = {0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0,
                      0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0,
                      0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0};

    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        if (primes[n-1] == 0)
            printf("not prime\n");
        else
            printf("prime\n");
    }

}
