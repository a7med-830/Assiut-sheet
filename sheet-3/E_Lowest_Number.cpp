#include <iostream>
using namespace std;

int main() {
    short n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int lowest = a[0];
    int lowest_pos = 1;
    for (int i = 0; i < n; i++) {
        if (lowest > a[i]) {
            lowest = a[i];
            lowest_pos = i + 1;
        }
    }

    cout << lowest << " " << lowest_pos;
}