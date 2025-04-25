#include <iostream>
using namespace std;

int main() {
    short n;
    cin >> n;

    short counter = 0;
    for (int i = 1; i > 0; i++) {
        if (counter != n) {
            if (i % 4 == 0) {
                cout << "PUM\n";
                counter++;
            }
            else {
                cout << i << " ";
            }
        }
        else {
            break;
        }
    }
}