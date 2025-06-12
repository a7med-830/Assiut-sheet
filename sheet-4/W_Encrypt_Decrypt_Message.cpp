#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string Key =
               "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/",
           Original =
               "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    int q;
    string s;
    cin >> q >> s;

    if (q == 1) {
        for (int i = 0; i < s.length(); i++) {
            int pos = Original.find(s[i]);
            s[i] = Key[pos];
        }
        cout << s;
    }
    else {
        for (int i = 0; i < s.length(); i++) {
            int pos = Key.find(s[i]);
            s[i] = Original[pos];
        }
        cout << s;

    }
}