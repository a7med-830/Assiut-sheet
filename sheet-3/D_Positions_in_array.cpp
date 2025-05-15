#include <array>
#include <iostream>
using namespace std;

int main() {
    short n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x <= 10)
            cout << "A[" << i << "] = " << x << endl;
    }
}