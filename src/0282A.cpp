//
// Created by Deepak Ramalingam on 8/23/23.
//

#include <iostream>
#include <string>

using namespace std;

int main_282A() {
    int n;
    cin >> n;

    int x = 0;

    while (n--) {
        string line;
        cin >> line;
        if (line.find("++") != string::npos) {
            x++;
        } else if (line.find("--") != string::npos) {
            x--;
        }
    }

    cout << x << endl;

    return 0;
}