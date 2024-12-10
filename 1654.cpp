#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) {
	long long K = 0, N = 0, max = 0, min = 1, result = 0;
	cin >> K >> N;
	vector<unsigned int> LAN(K, 0);

	for (int i = 0; i < K; i++) {
		cin >> LAN[i];
		if (LAN[i] > max) { max = LAN[i]; }
	}

	long long i = 0;
	while (min <= max) {
		int count = 0;
		i = (max + min) / 2;
		for (int j = 0; j < K; j++) {
			count += LAN[j] / i;
		}

		if (count >= N) {
			if (i > result) { result = i; }
			min = i + 1;
		}
		else {
			max = i - 1;
		}
	}

	cout << result << endl;

	return 0;
}