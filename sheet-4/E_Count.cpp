#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int sum = 0;

    for (char n : s) {
        int num = n - '0';
        sum += num;
    }

    cout << sum;
}
