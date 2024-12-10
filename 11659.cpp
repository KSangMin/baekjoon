#include<iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N = 0, M = 0, input = 0, numbers[100001] = { 0, };
	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		cin >> input;
		numbers[i] = numbers[i - 1] + input;
	}
	int begin, end;
	for (int i = 0; i < M; i++) {
		cin >> begin >> end;
		cout << numbers[end] - numbers[begin - 1] << "\n";
	}

	return 0;
}