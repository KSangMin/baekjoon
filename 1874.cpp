#include<iostream>
#include<vector>
using namespace std;

int main(void) {
	int N = 0, a = 0, count = 0;
	vector<int> input, numbers;
	vector<char> result;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		input.push_back(a);
	}

	for (int i = 1; i <= N; i++) {
		numbers.push_back(i);
		result.push_back('+');

		while (!numbers.empty() && numbers.back() == input[count]) {
			numbers.pop_back();
			result.push_back('-');
			count++;
		}
	}

	if (!numbers.empty()) { cout << "NO" << "\n"; }
	else {
		for (int i = 0; i < result.size(); i++) {
			cout << result[i] << "\n";
		}
	}
	return 0;
}