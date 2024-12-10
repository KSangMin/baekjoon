#include<stdio.h>
using namespace std;

class set {
public:
	bool s[21] = { };
	void add(int x);
	void remove(int x);
	int check(int x);
	void toggle(int x);
	void all();
	void empty();
};

void set::add(int x) { if (!check(x)) { s[x] = true; } }
void set::remove(int x) { if (check(x)) { s[x] = false; } }
int set::check(int x) {
	return s[x];
}
void set::toggle(int x) { check(x) ? remove(x) : add(x); }
void set::all() {
	for (int i = 1; i <= 20; i++) {
		if (!check(i)) { add(i); }
	}
}
void set::empty() {
	for (int i = 1; i <= 20; i++) {
		if (check(i)) { remove(i); }
	}
}

int main(void) {
	int N = 0, x = 0;
	char command[7];
	set S;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s", command);
		if (command[1] == 'd') {
			scanf("%d", &x);
			S.add(x);
		}
		else if (command[1] == 'e') {
			scanf("%d", &x);
			S.remove(x);
		}
		else if (command[1] == 'h') {
			scanf("%d", &x);
			printf("%d\n", (int)(S.check(x)));
		}
		else if (command[1] == 'o') {
			scanf("%d", &x);
			S.toggle(x);
		}
		else if (command[1] == 'l') {
			S.all();
		}
		else if (command[1] == 'm') {
			S.empty();
		}
	}

	return 0;
}