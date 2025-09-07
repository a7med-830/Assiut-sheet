#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i+=2) {
        if (n % i == 0) return false; 
    }
    return true;
}

int main() {
    int size, x, op, res = 0;
    cin >> size >> x;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        cin >> op;
        if (op == 1) {
            if (isPrime(arr[i]) == 1) {
                if (arr[i] % 2 == 0) { 
                    cout << 0 << " ";
                }
                else {
                    cout << 5 << " ";
                }
            }
            else {
                cout << -1 << " ";
            }
        }
        else {
            cout << 0 << " ";
        }
    }
}