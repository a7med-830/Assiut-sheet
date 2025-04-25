#include <iostream>
using namespace std;

bool check(short n, short a, short b) {
    int res = 0;
    while (n > 0) {
        int digit = n % 10;
        res += digit;
        n /= 10;
    }
    return (res <= b && res >= a);  
}

int main() {
    short n, a, b;
    int sum = 0;
    cin >> n >> a >> b;

    for (int i = 0; i <= n; i++) {
        if (check(i, a, b)) {
            sum += i;
        }
    }

    cout << sum;

}