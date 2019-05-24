#include <iostream>

using namespace std;

void swap(int*, int*);

void main()
{
	int a, b;
	cout << "请输入两个数" << endl;
	cin >> a >> b;
	cout << "交换前:" << endl;
	cout << a << '\t' << b << endl;
	swap(&a, &b);
	cout << "交换后:" << endl;
	cout << a << '\t' << b << endl;
}

void swap(int*a, int*b)
{
	int c = *a;
	*a = *b;
	*b = c;
}