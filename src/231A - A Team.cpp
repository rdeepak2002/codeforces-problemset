//
// Created by Deepak Ramalingam on 8/22/23.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int result = 0;

    while (n--) {
        int p, v, t;
        cin >> p;
        cin >> v;
        cin >> t;
        if (p + v + t >= 2) {
            result++;
        }
    }

    cout << result << endl;

    return 0;
}