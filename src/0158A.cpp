//
// Created by Deepak Ramalingam on 8/22/23.
//

#include <iostream>

using namespace std;

int compare(const void *a, const void *b) {
    int num1 = *((int*) a);
    int num2 = *((int*) b);
    return num1 - num2;
}

int main_158A() {
    int n, k, result = 0;
    cin >> n >> k;

    if (n == 0 || k == 0) {
        cout << 0 << endl;
        return 0;
    }

    int scores[100];

    // store scores and quick sort them to get kth highest
    for (int i = 0; i < n; ++i) {
        int score;
        cin >> score;
        scores[i] = score;
    }

    qsort(scores, n, sizeof(int), compare);

    // count # of scores higher than kth highest and greater than 0
    int benchmark = scores[n - k];

    for (int i = 0; i < n; ++i) {
        if (scores[i] >= benchmark && scores[i] > 0) {
            ++result;
        }
    }

    cout << result << endl;

    return 0;
}