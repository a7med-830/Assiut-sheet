#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s, t;
        cin >> s >> t;

        int len = max(s.length(), t.length());

        for (int i = 0; i < len; i++) {
            if (i < s.length())
                cout << s[i];
            if (i < t.length())
                cout << t[i];
        }
        cout << endl;
    }
}