#include <iostream>

using namespace std;

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	if ((a > b) && (a > c))
	{
		if (b < c)
			cout << "min=" << b << '\n';
		else
			cout << "min=" << c << endl;
	}
	else if ((a < b) && (a < c))
		cout << "min=" << a << '\n';
	else if ((a > b) && (a < c))
	{
		if (b < c)
			cout << "min=" << b << '\n';
		else
			cout << "min=" << c << endl;
	}
	else if ((a < b) && (a > c))
		if (b < c)
			cout << "min=" << b << '\n';
		else
			cout << "min=" << c << endl;
	return 0;
}