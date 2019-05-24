// 梯形积分.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<cmath>
using namespace std;

float f1(float);
float f2(float);
float integral(float (*f)(float), float a, float b, int n);

void main()
{
	cout << integral(f1, 1, 2.5, 1000) << endl;
	cout << integral(f2, 1, 3, 1000) << endl;

}

float f2(float a)
{
	return (a + a * a) / (1 + sin(a) + a * a);
}

float f1(float a)
{
	return a / (1 + a * a);
}

float integral(float (*f)(float),float a,float b,int n)
{
	float c,i,h;
	c = (f(a) + f(b)) / 2;
	h = (b - a) / n;
	for (i = 1; i < n - 1; i++)
		c += f(a + i * h);
	return c * h;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
