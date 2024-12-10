#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int N = 0;
	cin >> N;
	vector<int> A(N, 0);
	vector<int> D(N, 1);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	int cur = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (A[i] > A[j]) {
				D[i] = max(D[i], D[j] + 1);
			}
		}
	}

	int max = 0;
	for (int i = 0; i < N; i++) {
		if (D[i] > max) max = D[i];
	}

	cout << max;

	return 0;
}