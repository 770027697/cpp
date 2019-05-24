#include <iostream>
using namespace std;

struct student
{
	unsigned id : 7;
	unsigned c : 7;
	unsigned e : 7;
	unsigned p : 7;
};

void output(int n, student* a)；
void input(int n, student a[])；
void average(int n, student a[])；
void sort(int n, student a[])；

int main()
{
	int n; student* a;
	cout << "请输入全班人数:" << endl;
	cin >> n;
	a = new student[n];
	input(n, a);
	average(n, a);
	sort(n, a);
	output(n, a);
	delete[]a;
}

void sort(int n, student a[])
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n - 1; j++)
			if (a[j].p < a[j + 1].p)
			{
				student c = a[j];
				a[j] = a[j + 1];
				a[j + 1] = c;
			}
}

void average(int n, student a[])
{
	for (int i = 0; i < n; i++)
		a[i].p = (a[i].c + a[i].e) / 2;
}

void input(int n, student a[])
{
	unsigned id, c, e;
	for (int i = 0; i < n; i++)
	{
		cout << "请输入第" << i + 1 << "名学生数据" << endl;
		cin >> id >> c >> e;
		a[i].id = id;
		a[i].c = c;
		a[i].e = e;
	}
}

void output(int n, student * a)
{
	for (int i = 0; i < n; i++)
	{
		cout << "学号:" << (*a).id << endl
			<< "c++成绩:" << (*a).c << endl
			<< "英语成绩:" << (*a).e << endl
			<< "平均成绩:" << (*a).p << endl
			<< endl;
		a++;
	}
}