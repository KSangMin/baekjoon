#include<iostream>
using namespace std;

bool findPrime(int n) {
	if (n < 2) { return false; }
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main(void) {
	int N = 0, count = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int num = 0;
		cin >> num;
		if (findPrime(num) == true) {
			count++;
		}
	}
	cout << count << endl;

	return 0;
}