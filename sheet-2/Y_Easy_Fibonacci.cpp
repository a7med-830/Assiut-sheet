#include <iostream>
using namespace std;

int main() {
    short n;
    cin >> n;

    if (n == 1){
        cout << 0 << " ";
    }
    else if (n == 2){
        cout << 0 << " " << 1 << " ";
    }
    else {
        cout << 0 << " " << 1 << " ";
        
        int base = 0;
        int next = 1;
        for (int i = 2; i < n; i++) {
            int fab = base + next;
            cout << fab << " ";
            base = next;
            next = fab;
        }
    }
}