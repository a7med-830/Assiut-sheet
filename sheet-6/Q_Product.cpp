#include <iostream>
using namespace std;

int main() {
    long long L, R, M;
    cin >> L >> R >> M;

    long long result = 1;
    for (long long i = L; i <= R; i++) {
        result = (result * i) % M;
    }

    cout << result << endl;
    return 0;
}