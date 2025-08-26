#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isLucky(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7)
            return false;
        num /= 10;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    bool divisible = false;

    for (int i = 1; i <= n; i++) {
        if (isLucky(i) && n % i == 0) {
            divisible = true;
            break;
        }
    }

    if (divisible)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
