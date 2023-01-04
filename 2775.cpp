#include <iostream>
#include <vector>
using namespace std;
int main(void) {
	int T = 0, k = 0, n = 0;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> k >> n;
		vector<int> each_floor(n, 1);
		for (int j = 0; j <= k; j++) {
			for (int e = 1; e < n; e++) {
				each_floor[e] += each_floor[e - 1];
			}
		}
		cout << each_floor[n - 1] << endl;
	}
	
	return 0;
}