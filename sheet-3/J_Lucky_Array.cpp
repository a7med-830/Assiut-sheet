#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    short n;
    cin >> n;

    int a[n];
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < min) 
            min = a[i];
    }

    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == min) counter++;
    }

    (counter % 2) ? cout << "Lucky" : cout << "Unlucky";
}