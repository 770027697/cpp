#include <iostream>

using namespace std;

void main() {
	long double s, n;
	for (n = 1, s = 0; s <= 30; n++)
	{
		s += 1 / n;
		cout << s << endl;
		cout << n << endl;
	}
}