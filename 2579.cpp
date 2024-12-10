#include<iostream>
#include<algorithm>
using namespace std;

int main(void) {
	int N = 0;
	int stair[301] = { 0, };
	int result[301] = { 0, };

	cin >> N;
	for (int j = 1; j <= N; j++) {
		cin >> stair[j];
	}

	result[1] = stair[1];
	result[2] = max(stair[1], stair[1] + stair[2]);
	result[3] = max(stair[1] + stair[3], stair[2] + stair[3]);

	for (int i = 4; i <= N; i++) {
		result[i] = max(result[i - 2] + stair[i], result[i - 3] + stair[i - 1] + stair[i]);
	}

	cout << result[N];

	return 0;
}