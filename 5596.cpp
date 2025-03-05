#include<iostream>

using namespace std;

int main() {
	int S = 0, T = 0;

	int input;

	for (int i = 0; i < 4; i++) {
		cin >> input;
		S += input;
	}

	for (int i = 0; i < 4; i++) {
		cin >> input;
		T += input;
	}

	cout << max(S, T);

	return 0;
}