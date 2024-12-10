#include<iostream>
using namespace std;

int main(void) {
	int N = 0, input = 0, min = 4, result[11] = { 0, 1, 2, 4, };

	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> input;
		for (int j = min; j <= input; j++) {
				result[j] = result[j - 1] + result[j - 2] + result[j - 3];
		}
		if (input > min) { min = input; }
		cout << result[input] << endl;
	}

	return 0;
}