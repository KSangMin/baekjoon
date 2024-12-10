#include<iostream>
#include<string>

using namespace std;

int main() {
	long long a, b, r;
	string aString, bString;
	string longMax = "9223372036854775807";
	cin >> aString >> bString >> r;

	if (aString == "0" || bString == "0") cout << 0;
	else if (aString > longMax || aString.size() > 19 || bString > longMax || bString.size() > 19) cout << "overflow";
	else {
		a = stoll(aString);
		b = stoll(bString);
		if (a > r / b)cout << "overflow";
		else cout << a * b;
	}
	cout << "\n";

	return 0;
}