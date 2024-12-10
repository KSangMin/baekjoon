#include<iostream>
using namespace std;

int zeros[41] = { 1, 0, 1, 1, };
int ones[41] = { 0 ,1 ,1, };

int zero(int n) {
    int result = 0;
    if (n == 0) { result = 1; }
    else if (n == 1) { result = 0; }
    else if (zeros[n]) { result = zeros[n]; }
    else {
        zeros[n] = zero(n - 1) + zero(n - 2);
        result = zeros[n];
    }
    return result;
}

int one(int n) {
    int result = 0;
    if (n == 0) { result = 0; }
    else if (ones[n]) { result = ones[n]; }
    else {
        ones[n] = one(n - 1) + one(n - 2);
        result = ones[n];
    }
    return result;
}

int main(void) {
    int T = 0, input = 0;
    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> input;
        cout << zero(input) << " " << one(input) << "\n";
    }

	return 0;
}