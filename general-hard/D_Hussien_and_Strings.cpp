#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string a, b;
    cin >> a >> b;

    if (a.length() != b.length()) {
        cout << "NO";
        return 0;
    }

    vector<int> a_letters(123);
    for (int i = 0; i < a.length(); i++) {
        a_letters[(int)a[i]]++;
    }

    vector<int> mismatch;
    if (a != b) {
        for (int i = 0; i < a.length(); i++) {
            if (a[i] != b[i]) 
                mismatch.push_back(i);
        }

        if (mismatch.size() == 2) {
            swap(a[mismatch[0]], a[mismatch[1]]);
            if (a == b) {
                cout << "YES";
                return 0;
            }
            else {
                cout << "NO";
                return 0;
            }
        }
        else {
            cout << "NO";
            return 0;
        }
        
    }
    else {
        bool ok = false;
        for (int i = 97; i < 123; i++) {
            if (a_letters[i] >= 2) {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO");
    }

}