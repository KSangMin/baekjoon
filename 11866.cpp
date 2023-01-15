#include<iostream>
#include<vector>
using namespace std;

int main(void) {
	int K = 0, N = 0, count = 0, max = 0;
	cin >> K >> N;
	vector<int> joseph(K);
	for (int i = 0; i < K; i++) {
		joseph[i] = i + 1;
	}

	count = N-1;
	max = K;
	cout << "<" << joseph[count];
	joseph.erase(joseph.begin() + count);
	max--;

	for (int i = 1; i < K; i++) {
		count += N - 1;
		if (count >= max) {
			count %= max;
		}

		cout << ", " << joseph[count];
		joseph.erase(joseph.begin() + count);
		max--;
	}
	cout << ">";

	return 0;
}