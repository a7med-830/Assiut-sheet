#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

char arr[111][111];
int freq[111][111];

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int k = 0;
    vector<int> row, col, length;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == '*') {
                if (i > 0 && i < n - 1 && j > 0 && j < m - 1 &&
                    arr[i - 1][j] == '*' && arr[i + 1][j] == '*' &&
                    arr[i][j - 1] == '*' && arr[i][j + 1] == '*') {

                    int a = 1;
                    int len = 0;

                    while (i - a >= 0 && i + a < n && j - a >= 0 && j + a < m &&
                           arr[i - a][j] == '*' && arr[i + a][j] == '*' &&
                           arr[i][j - a] == '*' && arr[i][j + a] == '*') {
                        len++;
                        freq[i - a][j] = 1;
                        freq[i + a][j] = 1;
                        freq[i][j - a] = 1;
                        freq[i][j + a] = 1;
                        a++;
                    }

                    if (len > 0) {
                        row.push_back(i + 1);
                        col.push_back(j + 1);
                        length.push_back(len);
                        freq[i][j] = 1;
                        k++;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == '*' && !freq[i][j]) {
                cout << -1 << "\n";
                return 0;
            }
        }
    }

    cout << k << "\n";
    for (int i = 0; i < k; i++) {
        cout << row[i] << " " << col[i] << " " << length[i] << "\n";
    }
}
