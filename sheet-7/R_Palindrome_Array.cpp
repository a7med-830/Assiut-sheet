#include <iostream>
using namespace std;
typedef long long ll;

bool isPalindrome(int a[], int left, int right) {
    if (left >= right)
        return true;
    if (a[left] != a[right])
        return false;                            
    return isPalindrome(a, left + 1, right - 1); 
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (isPalindrome(a, 0, n - 1))
        cout << "YES\n";
    else
        cout << "NO\n";
} 