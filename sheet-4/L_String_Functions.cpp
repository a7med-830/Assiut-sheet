#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    while (q--) {
        string action;
        cin >> action;

        if (action == "pop_back") {
            s.pop_back();
        }
        else if (action == "front") {
            cout << s.front() << endl;
        }
        else if (action == "back") {
            cout << s.back() << endl;
        }
        else if (action == "sort") {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            sort(s.begin() + (l - 1), s.begin() + r);
        }
        else if (action == "reverse") {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            reverse(s.begin() + (l - 1), s.begin() + r);
        }
        else if (action == "print") {
            int l;
            cin >> l;
            cout << s[l - 1] << endl;
        }
        else if (action == "substr") {
            int l, r;
            cin >> l >> r;
            if (l > r)
                swap(l, r);
            cout << s.substr(l - 1, r - l + 1) << endl;
        }
        else if (action == "push_back") {
            char x;
            cin >> x;
            s.push_back(x);
        }
    }
}
