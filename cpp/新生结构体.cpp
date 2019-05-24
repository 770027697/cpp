// 新生结构体.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>
using namespace std;

struct student
{
	char name[10];
	int age;
	char sex[2];
	int cj;
};

float jsnnbl(student* a, int n);//计算男女比例
void input(student* a, int n);//输入
void output(student* a, int n);//输出
void output2(student* a, int n, int s,int g);//输出超出的
void sort(student* a, int n);//排序
void zjsyb(student* a, int n, float nnbl);//实验班

int main()
{
	int n;
	cout << "请输入班级人数:";
	cin >> n;
	student* a = new student[n];
	input(a, n);
	sort(a, n);
	//output2(a, n, 517,20);//输出高出517 20分的人
	zjsyb(a, n, jsnnbl(a, n));
}
		
void zjsyb(student* a, int n, float nnbl)
{
		int nem = 30 * nnbl, w = 30 - nem, s1 = 0, s2 = 0,sum=0;
		cout <<nnbl<<'\t'<< nem << '\t' << w << '\t' << s1 << '\t' << s2 << endl;
		for (int i = 0; i < n; i++,a++)
		{
			if (!strcmp(a->sex, "男") && s1 < nem)
			{
				cout << a->name << '\t' << a->age << '\t' << a->sex << '\t' << a->cj << endl;
				s1++;
			}
			else if (!strcmp(a->sex, "女") && s2 < w)
			{
				cout << a->name << '\t' << a->age << '\t' << a->sex << '\t' << a->cj << endl;
				s2++;
			}
		}
}

float jsnnbl(student* a, int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++, a++)
	{
		if (!strcmp(a->sex, "男"))
			sum++;
	}
	return sum / n;
}

void output2(student* a, int n, int s,int g)
{
	cout << "学生信息(姓名、年龄、性别、成绩。)" << endl;
	for (int i = 0; a->cj > s + g && i < n; i++, a++)
	{
		cout << a->name << '\t' << a->age << '\t' << a->sex << '\t' << a->cj << endl;
	}
}

void sort(student* a, int n)//冒泡排序法
{
	int i, j;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if (a[i].cj < a[j].cj)
			{
				student c = a[j];
				a[j] = a[i];
				a[i] = c;
			}
}

void output(student* a, int n)
{
	cout <<"学生信息(姓名、年龄、性别、成绩。)" << endl;
	for (int i = 0; i < n; i++, a++)
	{
		cout << a->name << '\t' << a->age << '\t' << a->sex << '\t'<< a->cj << endl;
	}
}

void input(student* a, int n)
{
	for (int i = 0; i < n; i++,a++)
	{
		cout << "正在输入第" << i + 1 << "个学生的姓名、年龄、性别、入学成绩。" << endl;
		cin >> a->name >> a->age >> a->sex >> a->cj;
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
