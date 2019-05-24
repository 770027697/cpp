// 链表学生.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>
using namespace std;

struct student
{
	double id;
	char name[10];
	int age;
	int cpp;
	int eg;
	int ze;
	student* next;
};

int main()
{
	int n,i,mins,maxs;
	student* head = NULL, * a, * tail = NULL, * min,*max;
	cout << "请输入学生人数:";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		a = new student;
		cout << "正在输入第" << i + 1 << "个学生的学号 姓名 年龄 c++成绩 英语成绩";
		cin >> a->id >>a->name >> a->age >> a->cpp >> a->eg;
		a->ze = a->cpp + a->eg;
		if (!head) tail = head = a;
		else tail->next = a; tail = a;
	}
	if (head) tail->next = NULL;
	for (min=max=a = head,maxs=mins=a->ze; a; a = a->next)
	{
		if (a->ze > maxs) max = a;
		if (a->ze < mins) min = a;
	}
	cout << "max:" << max->id << ' ' << max->name << ' ' << max->age << ' ' << max->cpp << ' ' << max->eg << ' ' << max->ze << endl;
	cout << "min:" << min->id << ' ' << min->name << ' ' << min->age << ' ' << min->cpp <<' '<< min->eg << ' '<< min->ze<<endl;
	for (a = head; a;)
	{
		tail = a;
		a = a->next;
		delete tail;
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
