#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

	cout << min({ a,b,c }) + min(d, e) - 50;

	return 0;
}