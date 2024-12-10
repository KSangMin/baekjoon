#include<iostream>
#include<algorithm>
using namespace std;

int numbers[1000001] = { 0, 0, 1, 1, };

int main(void) {
	int N = 0;
	cin >> N;

	for (int i = 4; i <= N; i++) {
		numbers[i] = numbers[i - 1] + 1;
		if (i % 2 == 0) {
			numbers[i] = min(numbers[i / 2] + 1, numbers[i]);
		}
		if (i % 3 == 0) {
			numbers[i] = min(numbers[i / 3] + 1, numbers[i]);
		}
	}

	cout << numbers[N];

	return 0;
}