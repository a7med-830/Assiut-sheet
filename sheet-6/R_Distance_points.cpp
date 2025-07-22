#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    long long x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double dist =
        sqrt((x2 - x1) * 1.0 * (x2 - x1) + (y2 - y1) * 1.0 * (y2 - y1));

    cout << fixed << setprecision(9) << dist << endl;
    return 0;
}
