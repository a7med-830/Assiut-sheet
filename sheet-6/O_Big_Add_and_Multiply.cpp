#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

string add(string s) {
    int carry = 9999;

    for (int i = s.size() - 1; i >= 0; i--) {
        int sum = (s[i] - '0') + carry;
        s[i] = (sum % 10) + '0';
        carry = sum / 10;
    }

    if (carry > 0)
        s = to_string(carry) + s;

    return s;
}

string multiply(string s) {
    int carry = 0, mul = 9999;
    string result = "";

    for (int i = s.size() - 1; i >= 0; i--) {
        int product = (s[i] - '0') * mul + carry;
        result += (product % 10) + '0';
        carry = product / 10;
    }

    while (carry > 0) {
        result += (carry % 10) + '0';
        carry /= 10;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string s;
    cin >> s;

    cout << add(s) << "\n" << multiply(s);
    
}