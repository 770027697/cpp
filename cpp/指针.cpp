#include <iostream>
using namespace std;

void main()
{
	int a[][3] = { {3,4,5},{6,7,8},{9,10,11} }, * p, i = 0, j = 0, n;//行可以不确定，但列必须确定。
	n = sizeof(a) / sizeof(a[0][0]);//取数组的总数
	for (p = (int*)a; i < n; cout << "\t", i++)//没有二维的特点。（变量指针法，会使p指向最后）
		cout << *p++; //p=p+4
	for (cout << endl, i = 0, p = &a[0][0]; i < n; cout << '\t', i++)//也没有二维的特点，且运行慢。（行列常量指针法）
		cout << *(p + i);					  //等价于p=p+i*4
}
