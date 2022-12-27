#include <iostream>
using namespace std;

int main(void) {
	int n = 0, arr[31] = { 0 };
	for (int i = 1; i <= 28; i++) {
		cin >> n;
		arr[n] = 1;
	}

	for (int i = 1; i <= 30; i++) {
		if (arr[i] == 0) {
			cout << i << endl;
		}
	}

	return 0;
}