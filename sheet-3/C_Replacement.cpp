#include <iostream>
#include <array>
using namespace std;

int main() {
    short n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x > 0) 
            x = 1;
        else if (x < 0) 
            x = 2;
        
        cout << x << " ";
    }

}