#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    char s;
    cin >> a >> s >> b;

    if (s == '+') {
        cout << a + b;
    }
    else if (s == '-') {
        cout << a - b;
    }
    else if (s == '*') {
        cout << a * b;
    }
    else if (s == '/') {
        cout << round(a / b);
    }
}