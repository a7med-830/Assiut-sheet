#include <iostream>
#include <vector>
using namespace std;

int main() {
    int row1, col1;
    cin >> row1 >> col1;
    vector<vector<int>> m1(row1, vector<int>(col1));

    for (int i = 0; i < row1; i++)
        for (int j = 0; j < col1; j++)
            cin >> m1[i][j];

    int row2, col2;
    cin >> row2 >> col2;
    vector<vector<int>> m2(row2, vector<int>(col2));

    for (int i = 0; i < row2; i++)
        for (int j = 0; j < col2; j++)
            cin >> m2[i][j];


    vector<vector<int>> res(row1, vector<int>(col2, 0));

    for (int i = 0; i < row1; i++)
        for (int j = 0; j < col2; j++)
            for (int k = 0; k < col1; k++)
                res[i][j] += m1[i][k] * m2[k][j];

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++)
            cout << res[i][j] << " ";
        cout << endl;
    }

    return 0;
}
