#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    string digits;
    cin >> digits;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += digits[i] - '0';
    }

    cout << sum;
}