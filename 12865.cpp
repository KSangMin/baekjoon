#include<iostream>

using namespace std;

int item[101][2];
int value[100001];

int main() {
	int n, k;
	cin >> n >> k;
 
	for (int i = 1; i <= n; i++) {
		cin >> item[i][0] >> item[i][1];
	}

	for (int i = 1; i <= n; i++) {
		int w = item[i][0];
		int v = item[i][1];
		for (int j = k; j >= w; j--) {
			value[j] = max(value[j], value[j - w] + v);
		}
	}

	cout << value[k];

	return 0;
}