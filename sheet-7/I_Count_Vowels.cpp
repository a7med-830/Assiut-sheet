#include <iostream>

using namespace std;
typedef long long ll;

int c = 0;

void count(string s, int &i) {
    if (i == s.length())
        return;

    if (tolower(s[i]) == 'a') c++;
    else if (tolower(s[i]) == 'e') c++;
    else if (tolower(s[i]) == 'i') c++;
    else if (tolower(s[i]) == 'o') c++;
    else if (tolower(s[i]) == 'u') c++;

    i++;
    return count(s, i);
}

int main() {
    string s;
    getline(cin, s);
    int i = 0;
    count(s, i);
    cout << c;
}