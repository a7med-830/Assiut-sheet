#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    string line;
    int start = 1, flag = 0;

    while (getline(cin, line)) {

        flag = 0;
        if (line.size() == 0 || line == " ") continue;

        for (int i = 0; i < line.size(); i++) {

            if (line[i] == '/' && line[i + 1] == '/' && start) break;
            else if (line[i] == '/' && line[i + 1] == '*') {
                start = 0;
                i++;
            }
            else if (line[i] == '*' && line[i + 1] == '/' && !start) {
                start = 1;
                i++;
            }    
            else if (start) {
                cout << line[i];
                flag = 1;
            }

        }
        if(flag && start) cout << endl;
    }
}