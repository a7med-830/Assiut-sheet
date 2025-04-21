#include <iostream>
using namespace std;

int main() {
    long long days;
    cin >> days;

    long long years = days / 365;
    days %= 365;

    long long months = days / 30;
    days %= 30;

    cout << years << " years\n";
    cout << months << " months\n";
    cout << days << " days\n";
}
