#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n;
	vector<string> name;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		if (temp.length() == 3) name.push_back(temp);
	}

	sort(name.begin(), name.end());

	cout << name[0] << "\n";

	return 0;
}