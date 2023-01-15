#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compareX(vector<int> a, vector<int> b) {
	return a[0] < b[0];
}

bool compareY(vector<int> a, vector<int> b) {
	return a[1] < b[1];
}

int main(void) {
	int N = 0;
	cin >> N;
	vector<vector<int>> points(N, vector<int>(2, 0));

	for (int i = 0; i < N; i++) {
		cin >> points[i][0] >> points[i][1];
	}

	sort(points.begin(), points.end(), compareY);
	stable_sort(points.begin(), points.end(), compareX);

	for (int i = 0; i < N; i++) {
		cout << points[i][0] << " " << points[i][1] << "\n";
	}

	return 0;
}