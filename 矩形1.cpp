#include <iostream>
******
ֱ��ʵ�ֵĳ���
���� : ����εĶԽ���or�ܳ������
	������� : ������
	* *********************** /
#include<iostream>
#include <cmath>
	using namespace std;


int main(void)
{
	float A; float x; float y;
	cout << "�����볤�ȺͿ��:";
	cin >> x >> y;
lp: cout << "��ѡ���������:1.�Խ��� 2.�ܳ� 3��� 4.�������� 6.�ر�" << "\n";
	cin >> A;
	if (A == 1)
		cout << "����Ϊ:" << x << "���Ϊ" << y << "�ĶԽ��ߣ�" << pow(((x*x) + (y*y)), 0.5) << "\n";
	else if (A == 2)
		cout << "����Ϊ:" << x << "���Ϊ" << y << "���ܳ���" << (x + y) * 2 << "\n";
	else if (A == 3)
		cout << "����Ϊ:" << x << "���Ϊ" << y << "�������" << x * y << "\n";
	else if (A == 4)
		main();
	else if (A == 6)
		return 0;
	else
		cout << "��������ȷ��ѡ��!" << "\n" << '\a';
	goto lp;
	return 0;
}