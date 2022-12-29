#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	bool asc = true, desc = true, mixed = false;
	vector<int> note;
	int n = 0;
	cin >> n;
	note.insert(begin(note), n);
	for (int i = 1; i < 8; i++) {
		cin >> n;
		note.insert(begin(note), n);

		if (!asc && !desc) {
			mixed = true;
			break;
		}

		if (note[1] < note[0]) {
			desc = false;
		}
		else if (note[1] > note[0]) {
			asc = false;
		}

		note.pop_back();
	}
	
	if (asc) { cout << "ascending"; }
	else if(desc) { cout << "descending"; }
	else { cout << "mixed"; }

	return 0;
}