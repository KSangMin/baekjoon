#include<iostream>
using namespace std;

int main(void) {
	int N = 0, K = 0, result = 0;
	int coin[10];
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> coin[i];
	}

	for (int i = N - 1; i >= 0; i--) {
		result += K / coin[i];
		K %= coin[i];
	}

	cout << result;

	return 0;
}