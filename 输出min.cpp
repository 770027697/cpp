#include <iostream>
******
C++:P11
���� : �����Сֵ
	������� : ������
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
	cout << "����������:" << endl;
	cin >> x;
	cout << "�벻ͬ����������:" << endl;
	cin >> y;
	cout << "��СΪ:" << min(x, y) << endl;
	main();
	return 0;
}