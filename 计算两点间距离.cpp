#include <iostream>

#include<cmath>
using namespace std;

int main() {
	float a, x1, y1, z1, x2, y2, z2;
	cout << "������ѡ���������:1.�ռ� 2.ƽ��" << endl;
	cin >> a;
	if (a == 2) {
		cout << "����������1:" << endl;
		cin >> x1 >> y1;
		cout << "����������2:" << endl;
		cin >> x2 >> y2;
		cout << "���������Ϊ:" << sqrt(((x1 - x2)*(x1 - x2)) + ((y1 - y2)*(y1 - y2))) << endl;
	}
	else if (a == 1) {
		cout << "����������1:" << endl;
		cin >> x1 >> y1 >> z1;
		cout << "����������2:" << endl;
		cin >> x2 >> y2 >> z2;
		cout << "���������Ϊ:" << sqrt(((x1 - x2)*(x1 - x2)) + ((y1 - y2)*(y1 - y2)) + ((z1 - z2)*(z1 - z2))) << endl;
	}
	else
		cout << "��������ȷ��ѡ��" << endl;
	main();
	return 0;
}