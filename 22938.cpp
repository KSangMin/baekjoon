#include<iostream>

using namespace std;

int main() {
	long long aX, aY, aR, bX, bY, bR;
	cin >> aX >> aY >> aR >> bX >> bY >> bR;

	long long dX = aX - bX, dY = aY - bY;
	long long distancePower = dX * dX + dY * dY;
	if (distancePower < (aR + bR) * (aR + bR)) cout << "YES\n";
	else cout << "NO\n";

	return 0;
}