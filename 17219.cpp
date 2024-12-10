#include<iostream>
#include<map>
using namespace std;
int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N = 0, M = 0;
	map<string, string> passwords;
	string url = "";

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> url;
		cin >> passwords[url];
	}

	for (int i = 0; i < M; i++) {
		cin >> url;
		cout << passwords[url] << "\n";
	}

	return 0;
}