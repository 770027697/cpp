#include <iostream>
*****
计算圆面积的面向对象程序
设计者 : 梁又友
	功能 : 计算并输出圆的面积
	* ********************** /
#include<iostream>
	using namespace std;

class yuan {
private:
	float r;
public:
	yuan(float a)
	{
		r = a;
	}
	~yuan()
	{}
	void setyuan(float a)
	{
		r = a;
	}
	float getbanjing()
	{
		return r;
	}
	float area()
	{
		return 3.14159f*r*r;
	}
};

int main() {
	float r;
	cout << "请输入半径:";
	cin >> r;
	yuan c(r);
	cout << "半径为" << c.getbanjing() << "的圆的面积为:" << c.area() << '\a' << endl;
	return 0;
}