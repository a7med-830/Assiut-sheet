#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s;
    cin >> s;

    int a[125];
    for (int i = 'a'; i <= 'z'; i++)
        cin >> a[i];

    int ok = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '?')
            continue;
        else
            ok = 0;
    }

    if (ok) {
        cout << 0 << endl;
        for (int i = 0; i < s.length(); i++) {
            cout << 'a';
        }
        return 0;
    }
    
    if (s[0] == '?') {
        char right;
        int end;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == '?')
                continue;
            else {
                right = s[i];
                end = i - 1;
                break;
            }
        }
        int cost, minn = INT_MAX;
        char ch;
        for (int chr = 'a'; chr <= 'z'; chr++) {
            cost = abs(a[chr] - a[right]);
            if (cost < minn) {
                minn = cost;
                ch = (char)chr;
            }
        }
        for (int i = 0; i <= end; i++)
            s[i] = ch;
    }

   
    if (s[s.length() - 1] == '?') {
        char left;
        int end;
        for (int i = s.length() - 2; i >= 0; i--) { 
            if (s[i] == '?')
                continue;
            else {
                left = s[i];
                end = i + 1;
                break;
            }
        }
        int cost, minn = INT_MAX;
        char ch;
        for (int chr = 'a'; chr <= 'z'; chr++) {
            cost = abs(a[chr] - a[left]);
            if (cost < minn) {
                minn = cost;
                ch = (char)chr;
            }
        }
        for (int i = end; i < s.length(); i++)
            s[i] = ch;
    }

    
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == '?') {
            char right, left = s[i - 1];
            int end;
            for (int st = i + 1; st < s.length(); st++) { 
                if (s[st] == '?')
                    continue;
                else {
                    right = s[st];
                    end = st - 1;
                    break;
                }
            }
            int minn = INT_MAX;
            char ch;
            for (int chr = 'a'; chr <= 'z'; chr++) {
                int cost = abs(a[left] - a[chr]) + abs(a[right] - a[chr]);
                if (cost < minn) {
                    minn = cost; 
                    ch = (char)chr;
                }
            }
            for (int st = i; st <= end; st++)
                s[st] = ch;
        }
    }

    ll cost = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        cost += abs(a[s[i]] - a[s[i + 1]]);
    }
    cout << cost << endl << s;
}
