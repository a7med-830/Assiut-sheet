#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;

    vector<string> a; 
    vector<int> b; 

    for (int i = 0; i < n; i++) {
        string team;
        cin >> team;

        auto it = find(a.begin(), a.end(), team);
        if (it == a.end()) {
            a.push_back(team);
            b.push_back(1); 
        }
        else {
            int index = distance(a.begin(), it);
            b[index]++;
        }
    }

    auto it = max_element(b.begin(), b.end());
    int index = distance(b.begin(), it);

    cout << a[index];
}
