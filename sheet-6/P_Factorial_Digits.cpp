#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0 || n == 1) {
        cout << "Number of digits of " << n << "! is 1" << endl;
        return 0;
    }

    double logSum = 0;
    for (int i = 2; i <= n; i++) {
        logSum += log10(i);
    }

    int numDigits = floor(logSum) + 1;

    cout << "Number of digits of " << n << "! is " << numDigits << endl;
    return 0;
}
