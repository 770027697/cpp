#include <iostream>

using namespace std;

void swap(int*, int*);

void main()
{
	int a, b;
	cout << "������������" << endl;
	cin >> a >> b;
	cout << "����ǰ:" << endl;
	cout << a << '\t' << b << endl;
	swap(&a, &b);
	cout << "������:" << endl;
	cout << a << '\t' << b << endl;
}

void swap(int*a, int*b)
{
	int c = *a;
	*a = *b;
	*b = c;
}