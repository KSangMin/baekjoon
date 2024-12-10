#include<iostream>
using namespace std;

int main(void) {
	int T = 0, N = 0;
	long long tri[101] = { 0, 1, 1, 1, 2, 2, };
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		for (int j = 6; j <= N; j++) {
			if (!tri[j]) {
				tri[j] = tri[j - 1] + tri[j - 5];
			}
		}
		cout << tri[N] << endl;
	}

	return 0;
}