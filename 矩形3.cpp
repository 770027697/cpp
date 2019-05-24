#include <iostream>
******
面向对像的程序
功能 : 求矩形的对角线or周长、面积
	程序设计 : 梁又友
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
	cout << "请输入长度和宽度:";
	cin >> x >> y;
	jiuxin a(x, y);
lp: cout << "请选择计算类型:1.对角线 2.周长 3面积 4.重新设置" << "\n";
	cin >> A;
	if (A == 1)
		cout << "长度为:" << a.getjiuxinx() << "宽度为" << a.getjiuxiny() << "的对角线＝" << a.duijiao() << "\n";
	else if (A == 2)
		cout << "长度为:" << a.getjiuxinx() << "宽度为" << a.getjiuxiny() << "的周长＝" << a.changdu() << "\n";
	else if (A == 3)
		cout << "长度为:" << a.getjiuxinx() << "宽度为" << a.getjiuxiny() << "的面积＝" << a.area() << "\n";
	else if (A == 4)
		main();
	else
		cout << "请输入正确的选择" << "\n";
	goto lp;
	return 0;
}