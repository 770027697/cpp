#include <iostream>
*****
����Բ���������������
����� : ������
	���� : ���㲢���Բ�����
	* ********************** /
#include<iostream>
	using namespace std;

class yuan {
private:
	float r;
public:
	yuan(float a)
	{
		r = a;
	}
	~yuan()
	{}
	void setyuan(float a)
	{
		r = a;
	}
	float getbanjing()
	{
		return r;
	}
	float area()
	{
		return 3.14159f*r*r;
	}
};

int main() {
	float r;
	cout << "������뾶:";
	cin >> r;
	yuan c(r);
	cout << "�뾶Ϊ" << c.getbanjing() << "��Բ�����Ϊ:" << c.area() << '\a' << endl;
	return 0;
}