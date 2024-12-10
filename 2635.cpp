#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n, maxCount = 0;
	cin >> n;
	vector<int> ans;

	for (int i = 1; i <= n; i++) {
		int n1 = i;
		int n2 = n - n1;
		vector<int> nums = { n, n1, n2 };
		int count = 3;
		
		while (n2 >= 0) {
			int temp = n2;
			n2 = n1 - temp;
			n1 = temp;

			if (n2 < 0) break;
			count++;
			nums.push_back(n2);
		}

		if (count > maxCount) {
			ans = nums;
			maxCount = count;
		}
	}

	cout << maxCount << "\n";
	for (int i : ans) {
		cout << i << " ";
	}

	return 0;
}