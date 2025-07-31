#include <iostream>
using namespace std;

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

void printInvertedPyramid(int current, int n) {
    if (current == 0)
        return;

    printSpaces(n - current);
    printStars(2 * current - 1);
    cout << endl;

    printInvertedPyramid(current - 1, n);
}

int main() {
    int n;
    cin >> n;
    printInvertedPyramid(n, n);
    return 0;
}
