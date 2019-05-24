#include <iostream>

using namespace std;

int main() {
	int a;
	cout << "请输入一个数字" << endl;
	cin >> a;
	cout << "该数的十六进制为:" << hex << a << endl;
	cout << "该数的八进制为:" << oct << a << endl;
	main();
	return 0;
}