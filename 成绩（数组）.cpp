#include <iostream>
using namespace std;

void main()
{
	float a[5][2];
	int i, sum[5] = { 0,0,0,0,0 };
	cout << "请输入学号 成绩" << endl;
	for (i = 0; i < 5; i++)
		cin >> a[i][0] >> a[i][1];
	for (i = 0; i < 5; i++)
	{
		if (a[i][1] >= 90)
			a[i][1] = 1, sum[0]++;
		else if (a[i][1] >= 80)
			a[i][1] = 2, sum[1]++;
		else if (a[i][1] >= 70)
			a[i][1] = 3, sum[2]++;
		else if (a[i][1] >= 60)
			a[i][1] = 4, sum[3]++;
		else
			a[i][1] = 5, sum[4]++;
	}
	cout << "\t学号\t等级" << endl;
	for (i = 0; i < 5; i++)
		cout << '\t' << a[i][0] << '\t' << a[i][1] << endl;
	for (i = 0; i < 5; i++)
		cout << "等级" << i + 1 << "有" << sum[i] << "人" << endl;
}