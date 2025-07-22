#include <iostream>
using namespace std;
typedef long long ll;

ll factorial(ll n) {
    ll result = 1;
    for (ll i = 2; i <= n; i++)
        result *= i;
    return result;
}

int main() {
    int A, B;
    cin >> A >> B;

    ll factA = factorial(A);
    ll factB = factorial(B);
    ll factAminusB = factorial(A - B);

    ll ncr = factA / (factB * factAminusB);
    ll npr = factA / factAminusB;

    cout << ncr << " " << npr << endl;
    return 0;
}
