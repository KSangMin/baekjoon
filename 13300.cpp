#include<iostream>
using namespace std;

int main(void) {
	int N, K, S, G, result = 0;
	cin >> N >> K;
	int students[2][7] = { };

	for (int i = 0; i < N; i++) {
		cin >> S >> G;
		students[S][G]++;
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 1; j <= 6; j++) {
			result += students[i][j] / K;
			if (students[i][j] % K > 0) {
				result++;
			}
		}
	}

	cout << result;
}