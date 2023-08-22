//
// Created by Deepak Ramalingam on 8/22/23.
//

#include <iostream>

using namespace std;

int main_71A() {
    int n;
    cin >> n;
    string s;

    for (int i = 0; i < n; ++i) {
        cin >> s;
        if (s.length() > 10) {
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        } else {
            cout << s << endl;
        }
    }

    return 0;
}