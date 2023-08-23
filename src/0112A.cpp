//
// Created by Deepak Ramalingam on 8/23/23.
//

#include <iostream>
#include <string>

using namespace std;

char toUpper(char c) {
    if (c > 'Z') {
        return (char) ((int) c - ('a' - 'A'));
    }

    return c;
}

int main_0122A() {
    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); ++i) {
        char c1 = toUpper(s1[i]);
        char c2 = toUpper(s2[i]);

        if (c1 > c2) {
            cout << 1 << endl;
            return 0;
        }

        if (c1 < c2) {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << 0 << endl;

    return 0;
}