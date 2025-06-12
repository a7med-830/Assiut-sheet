#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    while (s.find("EGYPT") != string::npos) {
        int pos = s.find("EGYPT");
        s.replace(pos, 5, " ");
    }
    
    cout << s;
}