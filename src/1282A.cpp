//
// Created by Deepak Ramalingam on 8/26/23.
//

#include <iostream>
#include <cmath>

using namespace std;

int main_1282A() {
    int t;
    cin >> t;

    while(t--) {
        int a_0, b_0, c, r;
        cin >> a_0 >> b_0 >> c >> r;

        int a = min(a_0, b_0);
        int b = max(a_0, b_0);

        bool intervalsOverlap = false;

        if (c + r <= b && c + r >= a) {
            intervalsOverlap = true;
        } else if (c - r <= b && c - r >= a) {
            intervalsOverlap = true;
        } else if (c - r <= a && c + r >= b) {
            intervalsOverlap = true;
        }

        int totalDurationMoving = b - a;

        if (intervalsOverlap) {
            int innerIntervalStart = max(c - r, a);
            int innerIntervalEnd = min(c + r, b);
            cout << totalDurationMoving - (innerIntervalEnd - innerIntervalStart) << endl;
        } else {
            cout << totalDurationMoving << endl;
        }
    }

    return 0;
}