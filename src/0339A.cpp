//
// Created by Deepak Ramalingam on 8/25/23.
//

#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>

using namespace std;

int main_339A() {
    char ch[100];
    fgets(ch, 100, stdin);
    unsigned long l = strlen(ch);

    // idx 0 = # of 1's
    // idx 1 = # of 2's
    // idx 2 = # of 3's
    int numberCounts[3] = {0, 0, 0};

    for (int i = 0; i < l; ++i) {
        char c = ch[i];
        int idx = (int) c - (int) '1';
        numberCounts[idx] += 1;
    }

//    cout << "number of 1's is " << numberCounts[0] << endl;
//    cout << "number of 2's is " << numberCounts[1] << endl;
//    cout << "number of 3's is " << numberCounts[2] << endl;

    for (int i = 0; i < numberCounts[0]; ++i) {
        if (i != 0) {
            cout << "+";
        }
        cout << 1;
    }

    for (int i = 0; i < numberCounts[1]; ++i) {
        if (i != 0) {
            cout << "+";
        } else if (numberCounts [0] > 0) {
            cout << "+";
        }
        cout << 2;
    }

    for (int i = 0; i < numberCounts[2]; ++i) {
        if (i != 0) {
            cout << "+";
        } else if (numberCounts[1] > 0 || numberCounts [0] > 0) {
            cout << "+";
        }
        cout << 3;
    }

    cout << endl;

    return 0;
}