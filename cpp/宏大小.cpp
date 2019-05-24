#include <iostream>

using namespace std;
#define MAX(A,B) (A)>(B)?(A):(B)
#define MIN(A,B) (A)<(B)?(A):(B)

void main()
{
	float a, b, c, MAX, MIN;
	cout << "ÇëÊäÈë3¸öÊý" << endl;
	cin >> a >> b >> c;
	MAX = MAX(MAX(a, b), c);
	MIN = MIN(MIN(a, b), c);
	cout << "MAX:" << MAX << endl << "MIN:" << MIN << endl;
}