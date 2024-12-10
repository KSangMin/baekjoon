#include<iostream>

using namespace std;

int alpha[26];

int main() {
    string temp;
    while (cin >> temp) {
        for (int i = 0; i < temp.size(); i++) {
            alpha[temp[i] - 'a']++;
        }
    }

    int mx = 0;
    for (int i = 0; i < 26; i++) {
        if (alpha[i] > mx) {
            mx = alpha[i];
        }
    }

    for (int i = 0; i < 26; i++) {
        if (alpha[i] == mx) cout << char('a' + i);
    }

    cout << "\n";

    return 0;
}