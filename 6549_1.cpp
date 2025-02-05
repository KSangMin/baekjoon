#include<iostream>
#include<algorithm>

using namespace std;

long long hist[100000];

long long Find(int left, int right) {//구간을 쪼개서 탐색
	if (left == right) return hist[left];//구간이 한 칸이 되면 히스토그램 한 개와 동일해짐
	int mid = (left + right) / 2;//중앙 계산
	int i = mid, j = mid + 1;//중앙 양 옆
	
	long long minH = min(hist[i], hist[j]);
	long long ans = minH * 2;

	while (left < i || j < right) {//i와 j 사이 구간의 최대 직사각형 넓이 계산
		if (i == left && j < right) j++;//왼쪽으로 더 확장 못하면 오른쪽으로 확장
		else if (j == right && left < i) i--;//오른쪽으로 더 확장 못하면 왼쪽으로 확장
		//둘 다 확장할 수 있는 경우 다음에 구간에 추가될 히스토그램을 고려해서 구간 확장
		else if (hist[i - 1] < hist[j + 1]) j++;//오른쪽으로 확장했을 때 더 큰 히스토그램이 추가되는 경우 오른쪽으로 확장
		else i--;//반대의 경우 왼쪽으로 확장

		minH = min({ minH, hist[i], hist[j] });//현재 구간에서 최소 높이
		ans = max(ans, minH * (j - i + 1));//현재 구간에서 최대 넓이
	}

	return max({ ans, Find(left, mid), Find(mid + 1, right) });//구간을 쪼개서 반복
}

int main() {

	int n;
	while (true) {
		cin.tie(NULL);
		ios_base::sync_with_stdio(false);

		cin >> n;
		if (n == 0) return 0;
		for (int i = 0; i < n; i++) {
			cin >> hist[i];
		}

		cout << Find(0, n - 1) << "\n";
	}
	return 0;
}