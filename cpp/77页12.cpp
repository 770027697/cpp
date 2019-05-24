#include <iostream>
using namespace std;

void main() {
	int a, b, c, d;
	for (a = 1; a <= 599; a++)
	{
		b = a / 100;
		c = (a / 10) % 10;
		d = a % 10;
		if (a % 3 == 0 && (b == 5 || c == 5 || d == 5)) cout << a << endl;
	}
}