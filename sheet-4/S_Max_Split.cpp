#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    string a[1000];
    int index = 0;

    int l = 0, r = 0;

    string res = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'L')
            l++;
        else
            r++;

        res += s[i];

        if (l == r) {
            a[index] = res;
            res = "";
            index++;
            l = 0;
            r = 0;
        }
    }

    cout << index << endl;
    for (int i = 0; i < index; i++)
        cout << a[i] << endl;
}