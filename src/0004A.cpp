//
// Created by Deepak Ramalingam on 8/22/23.
//

#include <iostream>

using namespace std;

/**
 * 1 = not possible
 * 2 = not possible
 * 3 = not possible
 * 4 = 2 + 2
 * 5 = not possible
 * 6 = 2 + 4
 * 7 = not possible
 * 8 = 2 + 6
 * **/
int main_4A() {
    int w;
    cin >> w;

    if (w >= 4 && w % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
