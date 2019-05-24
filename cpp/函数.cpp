#include <iostream>

using namespace std;

double f(int n)
{
	double  a, b = 1, sum = 0;
	for (a = 1; a <= n; a++)
	{
		b *= a;
		sum += (1 / b);
	}
	return sum;
}

void main()
{
	int n = 1;
	cout << "ÇëÊäÈën:";
	cin >> n;
	cout << "1+1/2!+1/3!+""""+1/n!=" << showpoint << f(n) << endl;
}