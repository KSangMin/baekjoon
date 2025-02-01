#include<iostream>

using namespace std;

int chap[100];

int main() {
	int n, sum = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> chap[i];
	}

	int study = 30;
	for (int i = 0; i < n; i++) {
		if (chap[i] <= study) {
			study -= chap[i];
			if (study <= 0) study = 30;
			sum++;
		}
		else if (chap[i] <= study * 2) {
			study = 30;
			sum++;
		}
		else study = 30;
	}

	cout << sum;

	return 0;
}