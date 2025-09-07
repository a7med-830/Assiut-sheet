#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; 
    cin >> t;

    stop:

    while (t--) {
        string a, b, c;
        cin >> a >> b >> c;

        int arr[500] = {0};
        for (auto ch : c) arr[ch]++;

        int index = 0, k = 0;
        for (auto ch : b) {
            if (a[index] != ch) {
                arr[ch]--;
                k++;
            }
            else {
                index++;
            } 

            if (arr[ch] < 0) {
                cout << "NO\n";
                goto stop;
            }
        }
        
        if (a.length() + k == b.length()) 
            cout << "YES\n";
        else 
            cout << "NO\n";

    }
    
}