
#include <iostream>
using namespace std;

int main() {

    double num1;
    cin >> num1;

    double num2;
    cin >> num2;

    double num3;
    cin >> num3;

    if (num1 >= num2 && num1 >= num3) {

        if (num2 < num3) {
            cout << num2 << " ";
        }
        else {
            cout << num3 << " ";
        }
        cout << num1;
    }
    else if (num2 >= num3) {

        if (num1 > num3) {
            cout << num3 << " ";
        }
        else {
            cout << num1 << " ";
        }
        cout << num2;
    }
    else if (num3 >= num2) {

        if (num2 > num1) {
            cout << num1 << " ";
        }
        else {
            cout << num2 << " ";
        }
        cout << num3;
    }
}