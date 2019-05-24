#include <iostream>

#include<cmath>
using namespace std;

void main() {
	int x, a, b, c;
	for (x = 100; x <= 999; x++) {
		a = x / 100;
		b = (x / 10) % 10;
		c = x % 10;
		if (x == (pow(a, 3) + pow(b, 3) + pow(c, 3)))
			cout << x << endl;
	}
}