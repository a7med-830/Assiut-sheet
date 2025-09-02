#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;

    string colors = "ROYGBIV";
    vector<string> values = {"G", "GB", "YGB", "YGBI", "OYGBI", "OYGBIV"};

    int r = n / 7;
    string answer;
    for (int i = 0; i < r; i++) {
        answer += colors;
    }

    int rem = n % 7;
    if (rem > 0) {
        answer += values[rem - 1];
    }

    cout << answer << endl;
}
