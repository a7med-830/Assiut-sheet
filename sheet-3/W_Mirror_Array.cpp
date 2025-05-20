#include <iostream>
using namespace std;

int main() {
    short rows, cols;
    cin >> rows >> cols;

    long long a[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> a[i][cols - (j + 1)];
        }
    }
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

}