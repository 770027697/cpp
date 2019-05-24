#include <iostream>

using namespace std;

void main()
{
	int a[6][5], j, i, b[6] = { 0,0,0,0,0 };
	cout << "商品1\t商品2\t商品3\t商品4\t商品5" << endl;
	for (i = 0; i < 6; i++)
		cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3] >> a[i][4];
	for (j = 0; j < 6; j++)
		for (i = 0; i < 5; i++)
			b[i] += a[j][i];
	for (i = 0; i < 5; i++)
		cout << "第" << i + 1 << "种商品销售总量为：" << b[i] << endl;
}