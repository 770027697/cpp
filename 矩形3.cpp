#include <iostream>
******
�������ĳ���
���� : ����εĶԽ���or�ܳ������
	������� : ������
	* *********************** /
#include<iostream>
#include <cmath>
	using namespace std;

class jiuxin {
private:
	float x; float y;
public:
	jiuxin(float a, float b)
	{
		x = a; y = b;
	}
	~jiuxin()
	{}
	void setjiuxin(float a, float b)
	{
		x = a; y = b;
	}
	float getjiuxinx()
	{
		return x;
	}
	float getjiuxiny()
	{
		return y;
	}
	float duijiao()
	{
		return pow(((x*x) + (y*y)), 0.5);
	}
	float changdu()
	{
		return (x + y) * 2;
	}
	float area()
	{
		return x * y;
	}
};

int main(void)
{
	float A; float x; float y;
	cout << "�����볤�ȺͿ��:";
	cin >> x >> y;
	jiuxin a(x, y);
lp: cout << "��ѡ���������:1.�Խ��� 2.�ܳ� 3��� 4.��������" << "\n";
	cin >> A;
	if (A == 1)
		cout << "����Ϊ:" << a.getjiuxinx() << "���Ϊ" << a.getjiuxiny() << "�ĶԽ��ߣ�" << a.duijiao() << "\n";
	else if (A == 2)
		cout << "����Ϊ:" << a.getjiuxinx() << "���Ϊ" << a.getjiuxiny() << "���ܳ���" << a.changdu() << "\n";
	else if (A == 3)
		cout << "����Ϊ:" << a.getjiuxinx() << "���Ϊ" << a.getjiuxiny() << "�������" << a.area() << "\n";
	else if (A == 4)
		main();
	else
		cout << "��������ȷ��ѡ��" << "\n";
	goto lp;
	return 0;
}