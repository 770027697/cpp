#include <iostream>

#include<cmath>
using namespace std;

int prime(int);

void main() {
	int a, c, d;
	for (a = 4; a <= 1000; a += 2)
		for (c = 1; c <= a / 2; c++)
		{
			d = a - c; if (prime(d) && prime(c)) cout << a << "=" << c << "+" << d << endl;
		}
}

int prime(int a) {
	int b, c;
	c = sqrt(a);
	for (b = 2; b <= c; b++)
		if (a%b == 0) break;
	if (b > c) return 1;
	else return 0;
}