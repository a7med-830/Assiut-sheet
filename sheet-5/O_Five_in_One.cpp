#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int is_prime(int n) {
    if (n == 0 || n == 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int is_palindrome(int n) {

    int temp = n;
    int sum = 0;
    int d;

    while (n > 0) {
        d = n % 10;
        sum = (sum * 10) + d;
        n /= 10;
    }

    if (temp == sum)
        return 1;
    else
        return 0;
}

int countDivisor(int n) {
    int c = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            c++;
    }

    return c;
}

int main() {
    int n, prime = 0, pali = 0;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (is_prime(a[i]))
        prime++;
        if (is_palindrome(a[i]))
        pali++;
    }
    
    sort(a, a + n);
    int maxx = a[n - 1], minn = a[0];
    
    int max_di, index;

    for (int i = 0; i < n; i++) {
        int c = countDivisor(a[i]);

        if (i == 0) {
            max_di = c;
            index = i;
        }
        else {
            if (c >= max_di) {
                max_di = c;
                index = i;
            }
        }
    }


    cout << "The maximum number : " << maxx << "\nThe minimum number : " << minn
         << endl;
    cout << "The number of prime numbers : " << prime
         << "\nThe number of palindrome numbers : " << pali << endl;
    cout << "The number that has the maximum number of divisors : "<< a[index];
}