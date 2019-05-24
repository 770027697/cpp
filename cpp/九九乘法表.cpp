#include <iostream>

using namespace std;

void main() {
	int a, b;
	for (b = 1; b <= 9; b++)
		for (a = 1; a <= b; a++)
		{
			if (a == b) cout << a << "*" << b << "=" << a * b << endl;
			else cout << a << "*" << b << "=" << a * b << ' ';
		}
}