#include <iostream>
using namespace std;
typedef long long ll;

int print(int n, int &i) {
    if (i > n) {
        return 0;
    }
    cout << i << endl;
    i++;
    return print(n, i);
}

int main() {
    int n, i = 1;
    cin >> n;

    print(n, i);
}