#include <iostream>


#include<cmath>
using namespace std;
#define s(a,b,c) ((a)+(b)+(c))/2
#define area(a,b,c) sqrt(s(a,b,c)*(s(a,b,c)-(a))*(s(a,b,c)-(b))*(s(a,b,c)-(c)))
float sjarea(float, float, float);

void main()
{
	int a, b, c;
	cout << "�����������εı߳�:" << endl;
	cin >> a >> b >> c;
	cout << "�����ε����Ϊ:" << area(a, b, c) << endl;
	cout << "�����ε����Ϊ:" << sjarea(a, b, c) << endl;
}

float sjarea(float a, float b, float c)
{
	int s = (a + b + c) / 2;
	return sqrt(s*(s - a)*(s - b)*(s - c));
}