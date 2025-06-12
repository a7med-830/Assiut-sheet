#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> a(5, 0);
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);

        if (s[i] == 'e')
            a[0]++;
        if (s[i] == 'g')
            a[1]++;
        if (s[i] == 'y')
            a[2]++;
        if (s[i] == 'p')
            a[3]++;
        if (s[i] == 't')
            a[4]++;
    }

    cout << *min_element(a.begin(), a.end());
}