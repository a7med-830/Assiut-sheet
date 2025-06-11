#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, reversed;
    cin >> s;

    reversed.resize(s.length());
    for (int i = s.length() - 1; i >= 0; i--) {
        reversed[i] = s[s.length() - i - 1]; 
    }

    if (s == reversed)
        cout << "YES";
    else
        cout << "NO";
}