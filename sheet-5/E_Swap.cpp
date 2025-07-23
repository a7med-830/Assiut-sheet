#include <iostream>

using namespace std;
typedef long long ll;

void swap(int &a, int &b) {
    a = b + a;
    b = a - b;
    a = a - b;
}

int main() {
    int a, b;
    cin >> a >> b;
    // cout << b << " " <<  a;  // ;)
    swap(a, b);
    cout << a << " " << b;
}