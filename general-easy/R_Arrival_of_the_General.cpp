#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min = *min_element(a.begin(), a.end());
    int max = *max_element(a.begin(), a.end());

    auto min_itr = find(a.rbegin(), a.rend(), min);
    int min_index = a.rend() - min_itr - 1;

    auto max_itr = find(a.begin(), a.end(), max);
    int max_index = distance(a.begin(), max_itr);

    int total_moves = max_index + (n - 1 - min_index);
    if (max_index > min_index)
        total_moves--;

    cout << total_moves;
}