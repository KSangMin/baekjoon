#include<iostream>

using namespace std;

int T, M, N, x, y;

int gcd(int a, int b) {
	int temp;
	if (a > b) {
		while (b != 0) {
			temp = a % b;
			a = b;
			b = temp;
		}
		return a;
	}
	while (a != 0) {
		temp = b % a;
		b = a;
		a = temp;
	}
	return b;
}

int calc() {
	int m = M * N / gcd(M, N), cnt = x;
	while (cnt <= m) {
		if (((cnt - x) % M == 0) && ((cnt - y) % N == 0)) {
			return cnt;
		}
		cnt += M;
	}
	return -1;
}

int main() {
	cin >> T;

	while (T--) {
		cin >> M >> N >> x >> y;

		cout << calc() << "\n";
	}

	return 0;
}