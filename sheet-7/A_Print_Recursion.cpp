#include <iostream>
using namespace std;
typedef long long ll;

int print(int &n) {
    if (n == 0) {
        return 0;
    }
    cout << "I love Recursion\n";
    n--; // return print(n - 1);
    return print(n); 
}

int main() {
    int n;
    cin >> n;

    print(n);
}