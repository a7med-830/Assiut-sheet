#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double a1 = (x1 + x2) / 2;
    double b1 = (y1 + y2) / 2;
    double r1 = sqrt(pow(a1 - x1, 2) + pow(b1 - y1, 2));
    
    double x3, y3, x4, y4;
    cin >> x3 >> y3 >> x4 >> y4;
    
    double a2 = (x3 + x4) / 2;
    double b2 = (y3 + y4) / 2;
    double r2 = sqrt(pow(a2 - x3, 2) + pow(b2 - y3, 2));

    double d = sqrt(pow(a2 - a1, 2) + pow(b2 - b1, 2));

    cout << ((d <= r1 + r2) ? "YES" : "NO");
}