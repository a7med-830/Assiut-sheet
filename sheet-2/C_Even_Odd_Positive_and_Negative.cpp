#include <iostream>
using namespace std;

int main() {
    short n, even = 0, odd = 0, pos = 0, neg = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num % 2) {
            odd++;
        }
        else {
            even++;
        }

        if (num != 0) {
            if (num > 0) {
                pos++;
            }
            else {
                neg++;
            }
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
}