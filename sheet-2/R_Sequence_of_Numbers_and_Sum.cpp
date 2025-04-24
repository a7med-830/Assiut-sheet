#include <iostream>
using namespace std;

int main() {
    while (true) {
        short n, m;
        cin >> n >> m;
        if (n <= 0 || m <= 0) {
            break;
        }

        int min_ = min(n, m);
        int max_ = max(n, m);
        int sum = 0;

        for (int i = min_; i <= max_; i++) {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;
    }
}