#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int m = 0, n = 0, sum = 0;
	vector<int> result;
	cin >> m >> n;
	for (int i = 1; i <= 100; i++) {
		if ((m <= i * i) && (i * i <= n)) {
			result.push_back(i * i);
		}
	}

	if (result.empty()) {
		cout << -1;
	}
	else {
		for (int i = 0; i < result.size(); i++) {
			sum += result[i];
		}
		cout << sum << endl << result.front();
	}
	
	return 0;
}