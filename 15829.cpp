#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	long long M = 1234567891, L = 0, result = 0, a = 0, r = 1;
	string alphabet = "";
	cin >> L >> alphabet;

	for (int i = 0; i < L; i++) {
		a = alphabet[i] - 96;
		result += (a * r) % M;
		r = (r * 31) % M;
	}
	cout << result % M;

	return 0;
}