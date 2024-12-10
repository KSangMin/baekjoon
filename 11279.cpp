#include<iostream>
#include<vector>
using namespace std;

void Swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void UpHeap(vector<int>& h) {
	int i = h.size() - 1;
	while (i > 1) {
		if (h[i / 2] < h[i]) {
			Swap(&h[i], &h[i / 2]);
		}
		else {
			return;
		}
		i /= 2;
	}
}

void DownHeap(vector<int>& h) {
	int i = 1;
	while (i * 2 <= h.size()) {
		int compIdx = i;
		if (i * 2 < h.size() && h[i * 2] > h[compIdx]) {
			compIdx = i * 2;
		}
		if ((i * 2) + 1 < h.size() && h[(i * 2) + 1] > h[compIdx]) {
			compIdx = (i * 2) + 1;
		}

		if (compIdx == i) {
			return;
		}
		else {
			Swap(&h[compIdx], &h[i]);
			i = compIdx;
		}
	}
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N = 0, input = 0;
	vector<int> h(1, 0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> input;
		if (input) {//힙 요소 추가
			h.push_back(input);
			UpHeap(h);
		}
		else {//힙 루트 제거
			//cout << "출력: ";
			if (h.size() <= 1) {
				cout << 0 << "\n";
			}
			else {
				cout << h[1] << "\n";
				h[1] = h.back();
				h.pop_back();
				DownHeap(h);
			}
		}
		/*
		cout << i << "번째:";
		for (int j = 1; j < h.size(); j++) {
			cout << h[j] << " ";
		}
		cout << "\n";
		*/
	}
}