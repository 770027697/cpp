#include <iostream>

using namespace std;

void sort3(int*, int*, int*);

void main()
{
	int a, b, c;
	cout << "������������" << endl;
	cin >> a >> b >> c;
	cout << "����ǰ:" << endl;
	cout << a << '\t' << b << '\t' << c << endl;
	sort3(&a, &b, &c);
	cout << "�����:" << endl;
	cout << a << '\t' << b << '\t' << c << endl;
	main();
}

void sort3(int*a, int*b, int*c)
{
	if (*a > *b) { int d = *a; *a = *b; *b = d; }
	if (*b > *c) { int d = *b; *b = *c; *c = d; }
	if (*a > *b) { int d = *a; *a = *b; *b = d; }
}