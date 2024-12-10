#include<iostream>
using namespace std;

int main(void) {
	string N = "";
	int count[10] = {}, max = 0, sixNine = 0;
	cin >> N;
	for (int i = 0; i < N.size(); i++) {
		count[N[i] - 48]++;
		if (N[i] - 48 == 6 || N[i] - 48 == 9) {
			sixNine++;
		}
		else if (max < count[N[i] - 48]) {
			max = count[N[i] - 48];
		}
	}

	if ((sixNine / 2 + sixNine % 2) > max) {
		max = sixNine / 2 + sixNine % 2;
	}

	cout << max;
}