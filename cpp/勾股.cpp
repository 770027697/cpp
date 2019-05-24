#include <iostream>

using namespace std;

void main()
{
	int a, b, c;
	cout << "100以内的勾股数有:\n";
	for (a = 2; a <= 100; a++)
	{
		for (b = 1; b < a; b++)
		{
			for (c = 1; c < b; c++)
				if (a*a == ((b*b) + (c*c)))
					cout << a << ' ' << b << ' ' << c << endl;
		}
	}
}