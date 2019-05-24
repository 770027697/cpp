// 实验24.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

void input(int a[][6], int n);
float average(int* a, int n);
int max(int(*a)[6], int n, int* r, int* p);

int main()
{
	int a[6][6],r=0,p=0;
	input(a, 6);
	cout <<"平均值:"<< average((int*)a, 36) << endl;
	cout <<"max:"<< max(a, 6, &r, &p) << endl;
	cout << "行:" << r << "列:" << p << endl;
}

int max(int(*a)[6], int n, int* r, int* p)
{
	int max=0,j, i;
	for(i=0;i<6;i++)//换行
		for (j=0; j < n; j++)//换列
			if (a[i][j] > max)//找到最大
			{
				*r = i+1;//返回当前最大的行
				*p = j+1;//返回当前最大的列
				max = a[i][j];//返回当前最大值
			}
	return max;
}

float average(int* a, int n)
{
	float sum=0,i;
	for (i = 0; i < n; i++)
		sum += *a++;
	return sum / n;
}

void input(int a[][6], int n)
{
	int q=1;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 6; j++)
		{
			cout << "正在输入第" << q++ << "个数" << endl;
			cin >> a[i][j];
		}
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
