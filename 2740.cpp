#include<iostream>
#include<vector>

using namespace std;

int main() {
	int aN, aM, bM, bK;
	cin >> aN >> aM;
	vector<vector<int>> A(aN, vector<int>(aM, 0));
	for (int i = 0; i < aN; i++) {
		for (int j = 0; j < aM; j++) {
			cin >> A[i][j];
		}
	}
	cin >> bM >> bK;
	vector<vector<int>> B(bM, vector<int>(bK, 0));
	for (int i = 0; i < bM; i++) {
		for (int j = 0; j < bK; j++) {
			cin >> B[i][j];
		}
	}

	vector<vector<int>> ans(aN, vector<int>(bK, 0));

	for (int i = 0; i < aN; i++) {
		for (int j = 0; j < bK; j++) {
			int sum = 0;
			for (int k = 0; k < aM; k++) {
				sum += A[i][k] * B[k][j];
			}
			ans[i][j] = sum;
		}
	}

	for (int i = 0; i < aN; i++) {
		for (int j = 0; j < bK; j++) {
			cout << ans[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}