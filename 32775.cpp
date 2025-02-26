#include<iostream>

using namespace std;

int main() {
	int s, f;
	cin >> s >> f;

	cout << ((f < s) ? "flight" : "high speed rail");

	return 0;
}