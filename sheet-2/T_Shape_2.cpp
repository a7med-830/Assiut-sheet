#include <iostream>
using namespace std;

int main() {
    short n;
    cin >> n;

    // stars = rowNumber(i) * 2 - 1
    // spaces = rows - rowNumber(i);

    for (int i = 1; i <= n; i++) {
        for (int j = n - i; j > 0; j--) {
            cout << " ";
        }
        for (int k = (i * 2) - 1; k > 0; k--) {
            cout << "*";
        }
        cout << endl;
    }
}