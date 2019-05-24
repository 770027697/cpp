#include <iostream>

#include<cmath>
using namespace std;

void main() {
	int a, b, c, sum = 0;
	for (a = 100; a <= 200; a++) {
		c = sqrt(a);
		for (b = 2; b <= c; b++) {
			if (a%b == 0) break;
		}
		if (b > c) sum += a;
	}
	cout << sum << endl;
}