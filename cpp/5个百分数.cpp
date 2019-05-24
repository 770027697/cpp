#include <iostream>

using namespace std;

int main() {
	int a, b, sum = 0;
	for (a = 1, b = 0; a <= 5 && (0 <= b || b >= 100); a++)
	{
		cin >> b; sum += b;
	}
	cout << "5个数和为:" << sum << endl;
	cout << "5数的平均值为:" << float(sum / 5) << endl;
}