#include <cmath>
#include <iostream>
using namespace std;

int main() {
    short n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long num;
        cin >> num;
        int res = 0;

        int pos = 0;
        while (num > 0) {
            if (num % 2 == 1) {
                res += pow(2, pos);
                pos++;
            }
            num = floor(num / 2);
        }

        cout << res << endl;
    }
}