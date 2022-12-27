#include <iostream>
using namespace std;

int main(void) {
	int n = 0, 
		num[100] = { 0 }, 
		v = 0, 
		result = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	cin >> v;
	for (int i = 0; i < n; i++) {
		if (num[i] == v) { result++; }
	}
	cout << result;

	return 0;
}