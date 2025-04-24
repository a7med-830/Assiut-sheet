#include <iostream>
using namespace std;

int main() {
    short t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        short x, y;
        cin >> x >> y;

        int min_ = min(x, y);
        int max_ = max(x, y);

        int sum = 0;

        for (int i = min_+1; i < max_; i++) {
            if (i % 2) {
                sum += i;
            }
        }

        cout << sum << endl;
    }
}