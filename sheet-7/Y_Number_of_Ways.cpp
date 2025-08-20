#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int e;

int number_of_ways(int s) {
    if (s >= e) 
        return s == e;

    int route1 = number_of_ways(s + 1);
    int route2 = number_of_ways(s + 2);
    int route3 = number_of_ways(s + 3);

    return route1 + route2 + route3;
}

int main() {
    int s;
    cin >> s >> e;

    cout << number_of_ways(s) << endl;
}