#include<iostream>

using namespace std;

int main() {
	string name = "";
	int age, weight;

	while (true) {
		cin >> name >> age >> weight;
		if (name == "#") return 0;
		cout << name;
		if (age > 17 || weight >= 80) cout << " Senior\n";
		else cout << " Junior\n";
	}

	return 0;
}