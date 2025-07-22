#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int charToDigit(char c) {
    if (isdigit(c))
        return c - '0';
    return c - 'A' + 10;
}

char digitToChar(int d) {
    if (d < 10)
        return '0' + d;
    return 'A' + (d - 10);
}

int main() {
    int T;
    cin >> T;

    if (T == 1) {
        string N;
        int X;
        cin >> N >> X;

        long long result = 0;
        for (char c : N) {
            result = result * X + charToDigit(c);
        }
        cout << result << endl;
    }
    else if (T == 2) {
        int N, X;
        cin >> N >> X;

        string result = "";
        while (N > 0) {
            int rem = N % X;
            result += digitToChar(rem);
            N /= X;
        }
        reverse(result.begin(), result.end());
        cout << result << endl;
    }
}
