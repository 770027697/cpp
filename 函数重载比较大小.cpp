#include <iostream>

using namespace std;

int max(int, int);
double max(double, double);

void main()
{
	int a = 2, b = 5, c = 6, g;
	double d = 1.2, e = 5.5, f = 7.5, h;
	g = max(max(a, b), c);
	h = max(max(d, e), c);
	cout << g << ' ' << h << endl;
}

int max(int a, int b) { return a > b ? a : b; }
double max(double a, double b) { return a > b ? a : b; }