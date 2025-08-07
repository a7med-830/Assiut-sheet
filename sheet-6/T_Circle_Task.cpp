#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
    double x, y, r, n;
    cin >> x >> y >> r >> n;

    while (n--) {
        double a, b;
        cin >> a >> b;

        double distance = sqrt(pow(a - x, 2) + pow(b - y, 2));

        cout << ((distance <= r) ? "YES" : "NO") << endl; 
    }
}