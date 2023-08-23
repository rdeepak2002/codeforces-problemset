//
// Created by Deepak Ramalingam on 8/23/23.
//

#include <iostream>
#include <cmath>

using namespace std;

int main_263A() {
    for (int r = 0; r < 5; ++r) {
        for (int c = 0; c < 5; ++c) {
            int n;
            cin >> n;
            if (n == 1) {
                cout << abs(3 - (r + 1)) + abs(3 - (c + 1)) << endl;
            }
        }
    }

    return 0;
}