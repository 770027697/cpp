#include <iostream>

using namespace std;

int sfshws(int);

void main()
{
	int a;
	cin >> a;
	if (sfshws(a))  cout << a << "�ǻ�������" << endl;
	else cout << a << "���ǻ�������" << endl;
}

int sfshws(int a)
{
	int b = 0, c;
	for (c = a; a != 0; a /= 10)
		b = b * 10 + a % 10;
	if (c == b) return 1;
	else return 0;
}