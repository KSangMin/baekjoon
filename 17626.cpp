#include<iostream>
#include<cmath>
using namespace std;

int Lag[50001] = { };

int main(void) {
	int N = 0;
	cin >> N;
	
	for (int i = 1; i <= N; i++) {
		int number = sqrt(i), min = 4;
		for (int j = number; j > 0; j--) {
			if (Lag[i - (j * j)] + 1 < min) {
				min = Lag[i - (j * j)] + 1;
			}
		}
		Lag[i] = min;
	}

	cout << Lag[N];

	return 0;
}