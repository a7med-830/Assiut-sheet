#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    if (num1 >= num2 && num1 >= num3) {
        
        if (num2 < num3) {
            cout << num2 << "\n";
            cout << num3 << "\n";
        }
        else {
            cout << num3 << "\n";
            cout << num2 << "\n";
        }
        cout << num1 << "\n";
    }
    else if (num2 >= num1 && num2 >= num3) {
        
        if (num1 < num3) {
            cout << num1 << "\n";
            cout << num3 << "\n";
        }
        else {
            cout << num3 << "\n";
            cout << num1 << "\n";
        }
        cout << num2 << "\n";
    }
    else if (num3 >= num2 && num3 >= num1) {
        
        if (num2 < num1) {
            cout << num2 << "\n";
            cout << num1 << "\n";
        }
        else {
            cout << num1 << "\n";
            cout << num2 << "\n";
        }
        cout << num3 << "\n";
    }
    

    cout << "\n";
    cout << num1 << "\n" << num2 << "\n" << num3;

}