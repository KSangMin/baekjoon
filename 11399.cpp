#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(int a, int b) { return a > b; }

int main(void) {
	int N = 0, result = 0;
	cin >> N;
	vector<int> time(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> time[i];
	}

	sort(time.begin(), time.end(), compare);

	for (int i = N - 1; i >= 0; i--) {
		result += (i + 1) * time[i];
		time.pop_back();
	}

	cout << result;

	return 0;
}