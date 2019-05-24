#include <iostream>
\*****
计算圆面积的直接实现程序
设计者 : 梁又友
	功能 : 计算并输出圆的面积
	* ********************** /
#include<iostream>
	using namespace std;

int main() {
	float r;
	cout << "请输入半径:";
	cin >> r;
	cout << "半径为" << r << "的圆的面积为:" << 3.14159f*r*r << endl << '\a';
	return 0;
}