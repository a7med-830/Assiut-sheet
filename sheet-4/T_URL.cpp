#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '?') {
            i++;
            while (i < s.length()) {
                if (s[i] == '=')
                    cout << ": ";
                else if (s[i] == '&')
                    cout << "\n";
                else
                    cout << s[i];

                i++;
            }
        }
    }
}