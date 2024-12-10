#include<iostream>
using namespace std;

int main(void) {
	int N = 0, input = 0, Y = 0, M = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input;
		Y += (input / 30) + 1;
		M += (input / 60) + 1;
	}

	if (Y * 10 > M * 15) {
		cout << "M " << M * 15;
	}
	else if (Y * 10 < M * 15) {
		cout << "Y " << Y * 10;
	}
	else {
		cout << "Y M " << Y * 10;
	}

	return 0;
}