#include<iostream>

using namespace std;

int n;
char tree[26][2];

void pre(char root) {
	if (root == '.') return;

	cout << root;
	pre(tree[root - 'A'][0]);
	pre(tree[root - 'A'][1]);

	return;
}

void in(char root) {
	if (root == '.') return;
	
	in(tree[root - 'A'][0]);
	cout << root;
	in(tree[root - 'A'][1]);

	return;
}

void post(char root) {
	if (root == '.') return;

	post(tree[root - 'A'][0]);
	post(tree[root - 'A'][1]);
	cout << root;

	return;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		char a, b, c;
		cin >> a >> b >> c;
		tree[a - 'A'][0] = b;
		tree[a - 'A'][1] = c;
	}

	pre('A');
	cout << "\n";
	in('A');
	cout << "\n";
	post('A');

	return 0;
}