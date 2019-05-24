#include <iostream>

using namespace std;

void fz(int);

void main()
{
	int a;
	cin >> a;
	fz(a);
}

void fz(int n)
{
	if (n != 0) cout << n % 10;
	if (n % 10) fz(n / 10);
}