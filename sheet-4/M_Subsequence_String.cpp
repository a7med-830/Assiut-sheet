#include <iostream>
#include <string>
using namespace std;

int main() {
    string h = "hello";
    int index = 0;

    string s; 
    cin >> s;

    for (int i = 0; i < s.length() && index < 5; i++) {
        if (s[i] == h[index]) {
            index++;
        }
    }

    (index == 5) ? cout << "YES" : cout << "NO";

}