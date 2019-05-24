#include <iostream>
******
C++:P11
功能 : 输出最小值
	程序设计 : 梁又友
	* *********************** /
#include<iostream>
	using namespace std;

float min(float x, float y)
{
	if (x > y) return y;
	else return x;
}

int main(void) {
	float x, y;
	cout << "请输入数字:" << endl;
	cin >> x;
	cout << "请不同的输入数字:" << endl;
	cin >> y;
	cout << "最小为:" << min(x, y) << endl;
	main();
	return 0;
}