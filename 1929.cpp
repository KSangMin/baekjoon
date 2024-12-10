#include<iostream>
using namespace std;

int main(void) {
	int M = 0, N = 0;
	cin >> M >> N;
	bool notPrime[1000001] = { false };
	notPrime[0] = notPrime[1] = true;

	for (int i = 2; i < N; i++) {
		for (int j = 2 * i; j <= N; j += i) {
			notPrime[j] = true;
		}
	}

	for (int i = M; i <= N; i++) {
		if (!notPrime[i]) { cout << i << "\n"; }
	}
	return 0;
}