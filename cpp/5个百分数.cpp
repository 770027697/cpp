#include <iostream>

using namespace std;

int main() {
	int a, b, sum = 0;
	for (a = 1, b = 0; a <= 5 && (0 <= b || b >= 100); a++)
	{
		cin >> b; sum += b;
	}
	cout << "5������Ϊ:" << sum << endl;
	cout << "5����ƽ��ֵΪ:" << float(sum / 5) << endl;
}