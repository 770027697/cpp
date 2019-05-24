#include <iostream>

#include<cmath>
using namespace std;

void main() {
	int a, b, c, d = 1, sum = 0;
	for (a = 100; a <= 200; a++) {
		c = sqrt(a);
		for (b = 2; b <= c; b++) {
			if (a%b == 0) break;
		}
		if (b > c&&d < 5) { cout << a << ' '; d++; }
		else if (b > c&&d == 5) { cout << a << endl; d = 1; }
	}
}