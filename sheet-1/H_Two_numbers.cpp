#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1;
    cin >> num1;
    double num2;
    cin >> num2;

    cout << "floor " << num1 << " / " << num2 << " = " << floor(num1 / num2) << "\n";
    cout << "ceil " << num1 << " / " << num2 << " = " << ceil(num1 / num2) << "\n";
    cout << "round " << num1 << " / " << num2 << " = " << round(num1 / num2) << "\n";
}