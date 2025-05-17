#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    short n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max = *max_element(a, a + n);
    int min = *min_element(a, a + n);

    for (int i = 0; i < n; i++) {
        if (a[i] == min)
            a[i] = max;
        else if (a[i] == max)
            a[i] = min;

        cout << a[i] << " ";
    }
}