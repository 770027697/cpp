#include <iostream>

using namespace std;

int main() {
	float x;
	cout << "请输入实际收费:";
	cin >> x;
	if (x < 2000)
		x *= 0.15;
	if (2000 <= x && x < 4000)
		x *= 0.1;
	if (4000 <= x && x < 6000)
		x *= 0.08;
	if (x >= 6000)
		x *= 0.05;
	cout << "应收取医疗费:" << x << endl;
	return 0;
}