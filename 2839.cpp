#include<iostream>
using namespace std;

int main(void) {
	int N = 0, count = 0, min = 1667, sum = 0;
	cin >> N;
	for (int i = 0; i <= N / 5; i++) {
		for (int j = 0; j <= N / 3; j++) {
			sum = 5 * i + 3 * j;
			count = i + j;
			if (sum == N && count < min) { min = count; }
		}
	}
	if (min != 1667) { cout << min; }
	else { cout << -1; }
	
	
	return 0;
}