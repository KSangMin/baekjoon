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
		for (int i = 0; i <= n; i++) {//마지막에 스택에 0을 넣어서 스택을 비우기 위해 n까지 반복
			long long height = i < n ? hist[i] : 0;//i == n일 때 스택에 0을 넣어서 스택을 비울 때 사용

			while (!s.empty() && hist[s.top()] > height) {//스택 맨 위에 있는 인덱스에 해당하는 막대의 높이가 height보다 더 크다면
				long long curH = hist[s.top()];//스택 맨 위 인덱스의 막대 추출
				s.pop();
				long long prevId = s.empty() ? -1 : s.top();//curH보다 작은 가장 가까운 막대의 인덱스, 스택이 비었으면 -1, 아니면 스택의 맨 위 인덱스
				m = max(m, curH * (i - 1 - prevId));//최대값 갱신, prevId가 -1이면 curH * i
			}
			s.push(i);
		}

		cout << m << "\n";
	}
	return 0;
}