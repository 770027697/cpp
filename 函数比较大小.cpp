#include <iostream>

using namespace std;
max(int, int);

void main()
{
	int a = 0, b = 0, c = 0;
	cout << "请输入三个实数:" << endl;
	cin >> a >> b >> c;
	cout << "max:" << max(maxn(a, b), c) << endl;
}

max(int x, int y)
{
	return x > y ? x : y;
}