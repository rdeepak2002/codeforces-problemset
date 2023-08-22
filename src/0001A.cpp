//
// Created by Deepak Ramalingam on 8/22/23.
//

#include <iostream>
#include <cmath>

using namespace std;

int main_1A() {
    int n, m, a;
    cin >> n >> m >> a;

    unsigned long long cols = ceil((double) n / (double) a);
    unsigned long long rows = ceil((double) m / (double) a);

    cout << cols * rows;

    return 0;
}