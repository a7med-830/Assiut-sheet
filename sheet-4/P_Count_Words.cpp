#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    bool word = true;
    int counter = 1;

    for (int i = 1; i < s.length(); i++) {
        if (isalpha(s[i])) {
            if (!word)
                counter++;
            word = true;
        }
        else 
            word = false;
    }

    cout << counter << endl;

}