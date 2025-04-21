#include <iostream>
using namespace std;

int main() {
    double a, b;
    string s;
    cin >> a >> s >> b;

    if (s == "<") {
        (a < b) ? cout << "Right" : cout << "Wrong";
    }
    else if (s == ">") {
        (a > b) ? cout << "Right" : cout << "Wrong";
    }
    else {
        (a == b) ? cout << "Right" : cout << "Wrong";
    }

}