#include <iostream>

******
ģ�黯�ĳ���
���� : ����εĶԽ���or�ܳ������
	������� : ������
	* *********************** /
	/************************
	ģ�黯�ĳ���
	����:����εĶԽ���or�ܳ������
	�������:������
	************************/
#include<iostream>
#include <cmath>
	using namespace std;

int area(float x, float y)
{
	return x * y;
}

int perimeter(float x, float y)
{
	return (x + y) * 2;
}

float diagonal(float x, float y)
{
	return pow(((x*x) + (y*y)), 0.5);
}

int main(void)
{
	float A; float x; float y;
	cout << "�����볤�ȺͿ��:";
	cin >> x >> y;
lp: cout << "��ѡ���������:1.�Խ��� 2.�ܳ� 3��� 4.��������" << "\n";
	cin >> A;
	if (A == 1)
		cout << "����Ϊ:" << x << "���Ϊ" << y << "�ĶԽ��ߣ�" << diagonal(x, y) << "\n";
	else if (A == 2)
		cout << "����Ϊ:" << x << "���Ϊ" << y << "���ܳ���" << perimeter(x, y) << "\n";
	else if (A == 3)
		cout << "����Ϊ:" << x << "���Ϊ" << y << "�������" << area(x, y) << "\n";
	else if (A == 4)
		main();
	else
		cout << "��������ȷ��ѡ��!" << "\n" << '\a';
	goto lp;
	return 0;
}