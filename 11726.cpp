#include<iostream>
using namespace std;

int main(void) {
	int N = 0, order[1001] = { 0, 1, 2, };
	cin >> N;

	for (int i = 3; i <= N; i++) {
		order[i] = (order[i - 1] + order[i - 2]) % 10007;
	}

	cout << order[N];

	return 0;
}