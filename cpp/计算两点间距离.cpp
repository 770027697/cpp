#include <iostream>

#include<cmath>
using namespace std;

int main() {
	float a, x1, y1, z1, x2, y2, z2;
	cout << "请输入选择计算类型:1.空间 2.平面" << endl;
	cin >> a;
	if (a == 2) {
		cout << "请输入坐标1:" << endl;
		cin >> x1 >> y1;
		cout << "请输入坐标2:" << endl;
		cin >> x2 >> y2;
		cout << "该两点距离为:" << sqrt(((x1 - x2)*(x1 - x2)) + ((y1 - y2)*(y1 - y2))) << endl;
	}
	else if (a == 1) {
		cout << "请输入坐标1:" << endl;
		cin >> x1 >> y1 >> z1;
		cout << "请输入坐标2:" << endl;
		cin >> x2 >> y2 >> z2;
		cout << "该两点距离为:" << sqrt(((x1 - x2)*(x1 - x2)) + ((y1 - y2)*(y1 - y2)) + ((z1 - z2)*(z1 - z2))) << endl;
	}
	else
		cout << "请输入正确的选择" << endl;
	main();
	return 0;
}