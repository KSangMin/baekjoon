#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

long long hist[100000];

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

		stack<int> s;
		long long m = 0;
		for (int i = 0; i <= n; i++) {//�������� ���ÿ� 0�� �־ ������ ���� ���� n���� �ݺ�
			long long height = i < n ? hist[i] : 0;//i == n�� �� ���ÿ� 0�� �־ ������ ��� �� ���

			while (!s.empty() && hist[s.top()] > height) {//���� �� ���� �ִ� �ε����� �ش��ϴ� ������ ���̰� height���� �� ũ�ٸ�
				long long curH = hist[s.top()];//���� �� �� �ε����� ���� ����
				s.pop();
				long long prevId = s.empty() ? -1 : s.top();//curH���� ���� ���� ����� ������ �ε���, ������ ������� -1, �ƴϸ� ������ �� �� �ε���
				m = max(m, curH * (i - 1 - prevId));//�ִ밪 ����, prevId�� -1�̸� curH * i
			}
			s.push(i);
		}

		cout << m << "\n";
	}
	return 0;
}