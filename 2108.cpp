#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

vector<int> mode(int c[], int length) {
	int max = 0;
	vector<int> all;
	for (int i = 0; i < length; i++) {
		if (c[i] > max) { max = c[i]; }
	}
	for (int i = 0; i < length; i++) {
		if (c[i] == max) { all.push_back(i - 4000); }
	}
	return all;
}

int main(void) {
	int N = 0, count[8001] = {}, length = 8001, input = 0, sum = 0;
	cin >> N;
	vector<int> numbers(N, 0), mod;
	for (int i = 0; i < N; i++) {
		scanf("%d", &input);
		numbers[i] = input;
		sum += input;
		count[input + 4000]++;
	}
	int average = round((double)sum / N);

	sort(numbers.begin(), numbers.end());
	
	cout << average << endl;
	cout << numbers[(numbers.size() - 1) / 2] << endl;
	mod = mode(count, length);
	cout << ((mod.size() > 1) ? mod[1] : mod[0]) << endl;
	cout << numbers[numbers.size() - 1] - numbers[0] << endl;

	return 0;
}