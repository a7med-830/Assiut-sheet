#include <iostream>
#include <string>
using namespace std;

int main() {
    string x, y;
    cin >> x >> y;

    int len = min(x.length(), y.length());

    for (int i = 0; i < len; i++) {
        if (x[i] == y[i])
            continue;
        else if (x[i] > y[i]) {
            cout << y;
            return 0;
        }
        else {
            cout << x;
            return 0;
        }
    }

    if (x.length() < y.length())
        cout << x;
    else
        cout << y;

    return 0;
}
