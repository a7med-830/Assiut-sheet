#include <algorithm>
#include <iostream>
using namespace std;

bool binarySearch(long long a[], long long target, int size) {
    int first = 0, last = size - 1, middle;
    bool found = false;
    while (first <= last && !found) {

        middle = (first + last) / 2;
        if (target == a[middle])
            found = true;
        else if (target < a[middle])
            last = middle - 1;
        else
            first = middle + 1;
    }
    return found;
}

int main() {
    int n, q;
    cin >> n >> q;

    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    while (q--) {
        long long target;
        cin >> target;

        (binarySearch(a, target, n)) ? cout << "found\n"
                                     : cout << "not found\n";
    }
}