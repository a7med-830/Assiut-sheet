#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;

    cout << (((x2 - x1) * (y3 - y1) == (x3 - x1) * (y2 - y1)) ? "YES" : "NO");
}
