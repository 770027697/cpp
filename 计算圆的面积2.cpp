#include <iostream>

using namespace std;

int mean(int r) {
	int b, c;
	c = sqrt(r);
	cout << c;
	for (b = 2; b <= c; b++)
		if (r%b == 0) break;
	if (b > c) return 1;
	else return 0;
}

int main() {
	int r;
	cin >> r;
	cout << mean(r) << endl;
	return 0;
}