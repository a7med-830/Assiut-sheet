#include <iostream>
using namespace std;

int main() {
    short n;
    cin >> n;
    long long max = 0;
    for (int i = 0; i < n; i++) {
        long long number = 0;
        cin >> number;
        if (number > max) {
            max = number;
        }
    }
    
    cout << max;
}