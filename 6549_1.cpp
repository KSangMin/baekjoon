#include<iostream>
#include<algorithm>

using namespace std;

long long hist[100000];

long long Find(int left, int right) {//������ �ɰ��� Ž��
	if (left == right) return hist[left];//������ �� ĭ�� �Ǹ� ������׷� �� ���� ��������
	int mid = (left + right) / 2;//�߾� ���
	int i = mid, j = mid + 1;//�߾� �� ��
	
	long long minH = min(hist[i], hist[j]);
	long long ans = minH * 2;

	while (left < i || j < right) {//i�� j ���� ������ �ִ� ���簢�� ���� ���
		if (i == left && j < right) j++;//�������� �� Ȯ�� ���ϸ� ���������� Ȯ��
		else if (j == right && left < i) i--;//���������� �� Ȯ�� ���ϸ� �������� Ȯ��
		//�� �� Ȯ���� �� �ִ� ��� ������ ������ �߰��� ������׷��� ����ؼ� ���� Ȯ��
		else if (hist[i - 1] < hist[j + 1]) j++;//���������� Ȯ������ �� �� ū ������׷��� �߰��Ǵ� ��� ���������� Ȯ��
		else i--;//�ݴ��� ��� �������� Ȯ��

		minH = min({ minH, hist[i], hist[j] });//���� �������� �ּ� ����
		ans = max(ans, minH * (j - i + 1));//���� �������� �ִ� ����
	}

	return max({ ans, Find(left, mid), Find(mid + 1, right) });//������ �ɰ��� �ݺ�
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