#include<iostream>
#include<string>

using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	string c, d;
	for (int i = 0; i < a.length(); i++) {
		char ch = a[i];

		if (ch == '5') c += '6';
		else c += ch;

		if (ch == '6') a[i] = '5';
	}
	for (int i = 0; i < b.length(); i++) {
		char ch = b[i];

		if (ch == '5') d += '6';
		else d += ch;

		if (ch == '6') b[i] = '5';
	}

	cout << stoi(a) + stoi(b) << " " << stoi(c) + stoi(d);

	return 0;
}