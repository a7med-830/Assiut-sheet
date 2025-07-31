#include <iostream>
using namespace std;
typedef long long ll;

int print(int &n) {
    if (n == 1) {
        cout << "1";
        return 0;
    }

    cout << n << " ";
    n--;
    return print(n);
}

int main() {
    int n;
    cin >> n;

    print(n);
}