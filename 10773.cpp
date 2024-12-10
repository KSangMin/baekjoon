#include<iostream>
#include<stack>
using namespace std;

int main(void) {
	int K = 0, n = 0, sum = 0;
	stack<int> money;
	cin >> K;
	for (int i = 0; i < K; i++) {
		cin >> n;
		if (n == 0) {
			sum -= money.top();
			money.pop();
		}
		else {
			sum += n;
			money.push(n);
		}
	}

	cout << sum;

	return 0;
}