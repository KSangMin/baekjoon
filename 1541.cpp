#include <iostream>
#include <vector>
#include <string>
using namespace std;

int numbers(int &i, string s) {
	string temp = "";
	while (s[i] != '-' && s[i] != '+' && i < s.length()) {
		temp.push_back(s[i]);
		i++;
	}

	return stoi(temp);
}

int main(void) {
	string input = "";
	cin >> input;
	int answer = 0;

	int flag = 1;
	int i = 0;
	answer += numbers(i, input);
	while (i < input.length()) {
		if (flag == 1 && input[i] == '-') {
			flag = -1;
		}
		i++;
		answer += flag * numbers(i, input);
	}

	cout << answer;
}