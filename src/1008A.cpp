//
// Created by Deepak Ramalingam on 8/28/23.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <set>

using namespace std;

int main_1008A() {
    char s[100];
    fgets(s, 100, stdin);
    const unsigned long n = strlen(s) - 1;

    const set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

    if (n == 1) {
        if (s[0] == 'n') {
            cout << "YES" << endl;
            return 0;
        }
        cout << (vowels.count(s[0]) == 0 ? "NO" : "YES") << endl;
        return 0;
    }

    for (int i = 0; i < n - 1; ++i) {
        const bool currentLetterIsN = (s[i] == 'n');
        const bool currentLetterIsConsonant = (vowels.count(s[i]) == 0);
        const bool nextLetterIsVowel = (vowels.count(s[i + 1]) >= 1);
        if (!currentLetterIsN && currentLetterIsConsonant && !nextLetterIsVowel) {
            cout << "NO" << endl;
            return 0;
        }
    }

    const char lastLetter = s[n - 1];
    const bool lastLetterIsN = (lastLetter == 'n');
    const bool lastLetterIsConsonant = (vowels.count(lastLetter) == 0);
    if (lastLetterIsConsonant && !lastLetterIsN) {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    return 0;
}