#include <iostream>
using namespace std;

int main() {
    short n;
    cin >> n;

    // stars = rowNumber(i) * 2 - 1
    // spaces = rows - rowNumber(i)
    
    for (int i = 1; i <= n; i++) {
        for (int j = n - i; j > 0; j--) {
            cout << " ";
        }
        for (int k = (i * 2) - 1; k > 0; k--) {
            cout << "*";
        }
        cout << endl;
    }

    // stars = rowNumber(i) * 2 - 1
    // spaces = rows - rowNumber(i)

    for (int i = n; i >= 1; --i) {
        for (int k = 0; k < n - i; ++k) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << "*";
        }

        cout << endl;
    }
}