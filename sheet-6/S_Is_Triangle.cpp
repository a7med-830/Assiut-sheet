#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    if (A + B > C && A + C > B && B + C > A) {
        double s = (A + B + C) / 2.0;
        double area = sqrt(s * (s - A) * (s - B) * (s - C));
        cout << "Valid" << endl;
        cout << fixed << setprecision(6) << area << endl;
    }
    else {
        cout << "Invalid" << endl;
    }

    return 0;
}
