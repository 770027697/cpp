#include <iostream>

#include<iomanip>
using namespace std;

int main() {
	float h, c;
	cout << "请输入华氏温度:";
	cin >> h;
	c = (5.0 / 9)*(h - 32);
	cout << "华氏" << h << "度=" << "摄氏" << c << "度" << endl;
	main();
	return 0;
}