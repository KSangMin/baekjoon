#include<iostream>
#include<algorithm>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, X, numbers[100001] = {}, result = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> numbers[i];
	}
	cin >> X;

	sort(numbers, numbers + N);

	int a = 0, b = N - 1;
	while (a < b) {
		int sum = numbers[a] + numbers[b];
		if (X > sum) {
			a++;
		}
		else if (X < sum) {
			b--;
		}
		else {
			result++;
			a++;
			b--;
		}
	}

	cout << result;
}