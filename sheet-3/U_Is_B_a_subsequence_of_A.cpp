#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int arr1[n1];
    int arr2[n2];

    for (int i = 0; i < n1; i++) 
        cin >> arr1[i];

    for (int i = 0; i < n2; i++) 
        cin >> arr2[i];

    int z = 0, counter = 0;
    for (int i = 0; i < n1; i++) {
        if (arr1[i] == arr2[z]) {
            counter++;
            z++;
        }
    }
    
    (counter == n2) ? cout << "YES" : cout << "NO";
}