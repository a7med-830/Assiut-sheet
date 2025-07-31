#include <iostream>
using namespace std;
typedef long long ll;

void printSpaces(int count) {
    if (count == 0)
        return;
    cout << " ";
    printSpaces(count - 1);
}

void printStars(int count) {
    if (count == 0)
        return;
    cout << "*";
    printStars(count - 1);
}

void printPyramid(int current, int n) {
    if (current > n)
        return;

    printSpaces(n - current);
    printStars(2 * current - 1);
    cout << endl;

    printPyramid(current + 1, n);
}

int main() {
    int n;
    cin >> n;
    printPyramid(1, n);
    return 0;
}
