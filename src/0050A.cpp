//
// Created by Deepak Ramalingam on 8/22/23.
//

#include <iostream>
#include <cstring>

using namespace std;

int main_50A() {
    int m, n;
    cin >> m >> n;
    cout << m * n / 2 << endl;
    return 0;

    // this also works...
//    int m, n;
//    cin >> m >> n;
//    ++n;
//    ++m;
//    int solution[m][n];
//    memset(solution, 0, m * n * sizeof(int));
//
//    solution[0][0] = 0;
//
//    for (int r = 1; r < m; ++r) {
//        if (r % 2 == 0) {
//            solution[r][0] = r / 2;
//        } else {
//            solution[r][0] = solution[r - 1][0];
//        }
//    }
//
//    for (int c = 1; c < n; ++c) {
//        if (c % 2 == 0) {
//            solution[0][c] = c / 2;
//        } else {
//            solution[0][c] = solution[0][c - 1];
//        }
//    }
//
//    for (int r = 1; r < m; ++r) {
//        for (int c = 1; c < n; ++c) {
//            if ((r * c) % 2 == 0) {
//                solution[r][c] = r * c / 2;
//            } else {
//                int withoutColumnSolution = solution[r][c - 1];
//                int extra = solution[r][0];
//                solution[r][c] = withoutColumnSolution + extra;
//            }
//        }
//    }
//
//    cout << solution[m - 1][n - 1] << endl;
//
//    return 0;
}