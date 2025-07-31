#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int print(int n, int a[]) {
    if (n < 0)
        return 0;
    
    cout << a[n] << " ";
    n -= 2;
    return print(n, a);

}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    n--;
    if (n % 2) n--;
    print(n, a);
}