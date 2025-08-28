#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char pos;
    cin >> pos;

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        auto it = find(keys.begin(), keys.end(), s[i]);
        int index = distance(keys.begin(), it);

        if (pos == 'L') 
            cout << keys[index + 1];
        else
            cout << keys[index - 1];
    }
}