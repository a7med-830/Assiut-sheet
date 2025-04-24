#include <iostream>
using namespace std;

void print(short x, char s) {
    for (int i = 0; i < x; i++) {
        cout << s;
    }
}

int main() {
    char s;
    cin >> s;

    short n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        short x;
        cin >> x;
        print(x, s);
        cout << "\n";
    }

}