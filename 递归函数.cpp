#include <iostream>

using namespace std;

int f(int);

void main()
{
	int n;
	cin >> n;
	cout << f(n) << endl;
}

int f(int a)
{
	if (a == 1 || a == 2) return 1;
	else return f(a - 1) + f(a - 2);
}