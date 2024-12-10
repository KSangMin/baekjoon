#include<iostream>
#include<map>
#include<string>
using namespace std;

string dogam1[100001];

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N = 0, M = 0;
	cin >> N >> M;
	map<string, int> dogam2;
	
	for (int i = 1; i <= N; i++) {
		cin >> dogam1[i];
		dogam2[dogam1[i]] = i;
	}

	string inputS = "";
	for (int i = 0; i < M; i++) {
		cin >> inputS;
		try {
			cout << dogam1[stoi(inputS)] << "\n";
		}
		catch (invalid_argument error) {
			cout << dogam2[inputS] << "\n";
		}
	}
	return 0;
}