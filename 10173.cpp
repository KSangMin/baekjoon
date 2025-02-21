#include<iostream>
#include<string>
#include<cctype>

using namespace std;

string s;

void FindNemo() {
	getline(cin, s);
	if (s == "EOI") return;

	for (int i = 0; i + 3 < s.size(); i++) {
		if (tolower(s[i]) == 'n' 
			&& tolower(s[i + 1]) == 'e' 
			&& tolower(s[i + 2]) == 'm' 
			&& tolower(s[i + 3]) == 'o') {
			cout << "Found" << endl;
			return;
		}
	}
	cout << "Missing" << endl;
	return;
}

int main() {
	
	while (s != "EOI") {
		FindNemo();
	}

	return 0;
}
