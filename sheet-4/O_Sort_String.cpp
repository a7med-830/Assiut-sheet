#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[26] = {0};

    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        a[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        char c = i + 'a'; // 'a' = 97
        while (a[i] > 0) {
            cout << c;
            a[i]--;
        }
    }
}