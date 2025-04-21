#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    string s, q;
    cin >> a >> s >> b >> q >> c;
    
    if (s == "+") {
        (a + b == c) ? cout << "Yes" : cout << a + b;
    }
    else if (s == "-") {
        (a - b == c) ? cout << "Yes" : cout << a - b;       
    }
    else if (s == "*") {
        (a * b == c) ? cout << "Yes" : cout << a * b;
    }

}