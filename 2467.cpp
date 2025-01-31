#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> num(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	int left = 0, right = n - 1;
	int sum = abs(num[left] + num[right]), minA = left, minB = right;
	while (left < right) {
		int temp = num[left] + num[right];
		if (abs(temp) < sum) {
			sum = abs(temp);
			minA = left;
			minB = right;
		}
		if (temp == 0) break;
		else if (temp > 0) right--;
		else left++;
		
	}

	cout << num[minA] << " " << num[minB];

	return 0;
}