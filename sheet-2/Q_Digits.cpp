#include <iostream>
using namespace std;

int main() {
    short n;
    cin >> n;


    for (int i = 0; i < n; i++) {
        long long num;
        cin >> num;
        if (num != 0) {
            while (num != 0) {
                int digit = num % 10;
                cout << digit << " ";
                num /= 10;
            }
        }
        else {
            cout << 0;
        }
        cout << "\n";
    }
}