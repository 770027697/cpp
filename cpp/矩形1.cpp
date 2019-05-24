#include <iostream>
******
直接实现的程序
功能 : 求矩形的对角线or周长、面积
	程序设计 : 梁又友
	* *********************** /
#include<iostream>
#include <cmath>
	using namespace std;


int main(void)
{
	float A; float x; float y;
	cout << "请输入长度和宽度:";
	cin >> x >> y;
lp: cout << "请选择计算类型:1.对角线 2.周长 3面积 4.重新设置 6.关闭" << "\n";
	cin >> A;
	if (A == 1)
		cout << "长度为:" << x << "宽度为" << y << "的对角线＝" << pow(((x*x) + (y*y)), 0.5) << "\n";
	else if (A == 2)
		cout << "长度为:" << x << "宽度为" << y << "的周长＝" << (x + y) * 2 << "\n";
	else if (A == 3)
		cout << "长度为:" << x << "宽度为" << y << "的面积＝" << x * y << "\n";
	else if (A == 4)
		main();
	else if (A == 6)
		return 0;
	else
		cout << "请输入正确的选择!" << "\n" << '\a';
	goto lp;
	return 0;
}