#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long N;
    cin >> N;

    vector<pair<long long, int>> factors;
    int cnt = 0;
    while (N % 2 == 0) {
        N /= 2;
        cnt++;
    }
    if (cnt)
        factors.push_back({2, cnt});

    for (long long i = 3; i * i <= N; i += 2) {
        cnt = 0;
        while (N % i == 0) {
            N /= i;
            cnt++;
        }
        if (cnt)
            factors.push_back({i, cnt});
    }

    if (N > 1) {
        factors.push_back({N, 1});
    }

    for (size_t i = 0; i < factors.size(); i++) {
        cout << "(" << factors[i].first << "^" << factors[i].second << ")";
        if (i + 1 < factors.size())
            cout << "*";
    }
    cout << "\n";
    return 0;
}
