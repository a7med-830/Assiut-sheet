#include <iostream>
using namespace std;

int main() {
    short a, b;
    cin >> a >> b;

    int size = a + b + 1;
    bool ok = true;
    char s[size];
    for (int i = 0; i < size; i++) {
        cin >> s[i];
        if (i != a) {
            if (!isdigit(s[i]))
                ok = false;
        }
    }

    (s[a] == '-' && ok) ? cout << "Yes" : cout << "No";
}