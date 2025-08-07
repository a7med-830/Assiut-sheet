#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    cout << (((x2 - x1) * (y4 - y3) == (x4 - x3) * (y2 - y1)) ? "YES" : "NO");
}
