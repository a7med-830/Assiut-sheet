#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int weight[21], value[21];

int knapSack(int w, int items) {
    if (w == 0 || items == 0) return 0;
    if (weight[items - 1] > w) return knapSack(w, items - 1);

    return max((value[items - 1] + knapSack(w - weight[items - 1], items - 1))
                   ,knapSack(w, items - 1));
}

int main() {
    int n, w;
    cin >> n >> w;

    for (int i = 0; i < n; i++) 
        cin >> weight[i] >> value[i];

    cout << knapSack(w, n) << endl;
    
}