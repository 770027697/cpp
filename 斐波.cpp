#include <iostream>

using namespace std;

void main() {
	int i, a = 0, b = 1, c, fib[20] = { 0,1 };
	for (i = 2; i < 20; i++)
		for (; c <= a + b; c++)
			if (c == a + b)
			{
				a = b;
				b = c;
				fib[i] = c;
				break;
			}
	for (i = 0; i < 20; i++)
		cout << i + 1 << "\t" << fib[i] << endl;
}