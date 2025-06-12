#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    for (int i = 0; i < s.length(); i++) {
        int count = 0;
        if (s[i] == s[i - 1] && i > 0)
            continue;
    
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == s[i])
            count++;
        }
        cout << s[i] << " : " << count << endl;
        
    }
}