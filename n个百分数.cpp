#include <iostream>
using namespace std;

void main() {
	int a, b, sum = 0;
	for (cin >> a; 0 <= a && a <= 100; cin >> a)
		sum += a;
	cout << "�ܳɼ�" << sum << endl;
	cout << "ƽ���ɼ�" << float(sum / 5) << endl;
}