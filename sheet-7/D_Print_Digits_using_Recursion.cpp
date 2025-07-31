#include <iostream>
using namespace std;
typedef long long ll;

int print(string s, int i) {
    if (i == s.length())
        return 0;

    cout << s[i] << " ";
    i++;
    return print(s, i);
} 

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int i = 0;
        print(s, i);
        cout << endl;
    }
}