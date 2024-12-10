#include<iostream>
using namespace std;
int main(void) {
	string S = "";
	cin >> S;
	int alphabet[26] = {};

	for (int i = 0; i < S.size(); i++) {
		alphabet[S[i] - 97]++;
	}

	for (int i = 0; i < 26; i++) {
		cout << alphabet[i] << " ";
	}

	return 0;
}