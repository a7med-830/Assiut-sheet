#include <iostream>
#include <numeric>
using namespace std;

int main() {
    short a, b;
    cin >> a >> b;

    int gcd = min(a,b);

    while (gcd > 1) {
        if (a % gcd == 0 && b % gcd == 0)
            break;
        gcd--;
    }
    
    cout << gcd;
}