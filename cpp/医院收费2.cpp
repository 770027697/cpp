#include <iostream>

using namespace std;

void main() {
	int x, a;
	cout << "ʵ��ҽ���շ�:";
	cin >> x;

	a = (x > 0 && x < 2000) ? 1 : (x >= 2000 && x < 4000) ? 2 : (x >= 4000 && x < 6000) ? 3 : (x >= 6000) ? 4 : 5;
	switch (a) {
	case 1:x *= 0.15; break;
	case 2:x *= 0.1; break;
	case 3:x *= 0.08; break;
	case 4:x *= 0.05; break;
	default:cout << "��������Ч����!" << endl; main();
	}
	cout << "Ӧ��ȡҽ�Ʒ�Ϊ:" << x << endl;
}